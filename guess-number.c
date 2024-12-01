// 202411100807 韩雨昊

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main()
{
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("I have a number between 1 and 100. Can you guess it?\n");
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number)
        {
            printf("Too big\n");
        }
        else if (guess < number)
        {

            printf("Too small\n");
        }
        else
        {
            if (attempts == 1)
            {
                printf("Bingo!\n");
            }
            if (attempts > 1 && attempts <= 3) {
                printf("Lucky you!\n");
            }
            if (attempts > 3 && attempts <= N) {
                printf("Good job!\n");
            }
            return 0;
        }
    } while (guess != number && attempts < N && guess > 0);
    printf("Game over!");
    return 0;
}