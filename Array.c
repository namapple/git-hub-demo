#include <stdio.h>

int main()
{
    int num = 5;
    int guess;
    int count = 0;
    int limit = 3;
    int out = 0;
    char name[20];
    printf("What's your name? ");
    scanf("%20[^\n]", name);
    printf("Hi %s, could you guess my secret number?\n", name);

    do {
            if (count < limit) {
                printf("Enter a number: ");
                scanf("%d", &guess);
                if (guess < num) printf("Too low!\n");
                if (guess > num) printf("Too high!\n");
                count++;
            }
            else {
                out = 1;
            } 
    } while (guess != num && out == 0);
    if (out == 0) printf("You win!");
    else printf("Out of guesses!");
    return 0;
}