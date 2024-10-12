// switch相关应用之自动售货机
#include <stdio.h>

int main(void)
{
    int choice;
    double price;

    // menu
    printf("[1] Crispy\n");
    printf("[2] Popcorn\n");
    printf("[3] Chocolate\n");
    printf("[4] Crispy\n");
    printf("[0] Exit\n");
    while (1)
    {
        printf("====================\n");
        printf("Enter choice:");
        scanf("%d", &choice);
        if (choice == 0)
            break;
        switch (choice)
        {
        case 1:
            price = 3.0;
            break;
        case 2:
            price = 2.5;
            break;
        case 3:
            price = 4.0;
            break;
        case 4:
            price = 3.5;    
            break;
        default:
            price = 0.0;
            break;
        }
        printf("price = %.2f\n", price);
    }
    return 0;
}