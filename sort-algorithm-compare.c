#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void initialize_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand();
    }
}

// 快速排序
void quick_sort(int arr[], int left, int right) {
    if (left >= right) return;
    int pivot = arr[left];
    int i = left, j = right;
    while (i < j) {
        while (i < j && arr[j] >= pivot) j--;
        arr[i] = arr[j];
        while (i < j && arr[i] <= pivot) i++;
        arr[j] = arr[i];
    }
    arr[i] = pivot;
    quick_sort(arr, left, i - 1);
    quick_sort(arr, i + 1, right);
}

// 归并排序
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    // 动态分配内存
    int* L = (int*)malloc(n1 * sizeof(int));
    int* R = (int*)malloc(n2 * sizeof(int));
    if (L == NULL || R == NULL) {
        fprintf(stderr, "内存分配失败\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
    // 释放内存
    free(L);
    free(R);
}

void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// 堆排序
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest]) largest = left;
    if (right < n && arr[right] > arr[largest]) largest = right;
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

void heap_sort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selection_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void insertion_sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

double test_sorting_algorithm(void (*sort_func)(int[], int), int arr[], int size, const char* name) {
    initialize_array(arr, size);
    clock_t start = clock();
    sort_func(arr, size);
    clock_t end = clock();
    double duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("%s用时：%f\n", name, duration);
    return duration;
}

double test_sorting_algorithm_with_bounds(void (*sort_func)(int[], int, int), int arr[], int size, const char* name) {
    initialize_array(arr, size);
    clock_t start = clock();
    sort_func(arr, 0, size - 1);
    clock_t end = clock();
    double duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("%s用时：%f\n", name, duration);
    return duration;
}

void print_progress_bar(const char* name, double duration, double max_duration) {
    int bar_width = 50;
    double ratio = duration / max_duration;
    int pos = (int)(bar_width * ratio);
    if (pos > bar_width) pos = bar_width;  // 限制 pos 不超过 bar_width

    printf("%s [", name);
    for (int i = 0; i < bar_width; ++i) {
        if (i < pos) printf("=");
        else printf(" ");
    }
    printf("] %f\n", duration);
}

int main() {
    srand(time(NULL));  // 初始化随机数生成器

    int size = 100000;
    int arr[size];
    double durations[6];
    const char* names[] = {"冒泡排序", "选择排序", "插入排序", "快速排序", "归并排序", "堆排序  "};

    durations[0] = test_sorting_algorithm(bubble_sort, arr, size, names[0]);
    durations[1] = test_sorting_algorithm(selection_sort, arr, size, names[1]);
    durations[2] = test_sorting_algorithm(insertion_sort, arr, size, names[2]);
    durations[3] = test_sorting_algorithm_with_bounds(quick_sort, arr, size, names[3]);
    durations[4] = test_sorting_algorithm_with_bounds(merge_sort, arr, size, names[4]);
    durations[5] = test_sorting_algorithm(heap_sort, arr, size, names[5]);

    double max_duration = durations[0];
    for (int i = 1; i < 6; i++) {
        if (durations[i] > max_duration) {
            max_duration = durations[i];
        }
    }

    printf("\n排序算法性能比较:\n");
    for (int i = 0; i < 6; i++) {
        print_progress_bar(names[i], durations[i], max_duration);
    }

    return 0;
}