// Guessing the number game
// With Random Number Generator

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int rnumber = rand() % 100 + 1;
    // printf("%d\n",rnumber);

    int i, guess, maxattempt = 10;
    // i= number of guesses
    printf("WELCOME TO THE NUMBER GUESSING GAME\n");
    printf("\nGUESS A NUMBER BETWEEN 0-100\n");

    for (i = 1; i <= maxattempt; i++)
    {
        scanf("%d", &guess);

        if (guess < 1 || guess >= 100)
        {
            printf("INVALID INPUT PLEASE ENTER A NUMBER BETWEEN 0-100\n");
        }

        else if (guess > rnumber)
        {
            printf("TRY A LOWER NUMBER;AND YOU HAVE ONLY %d ATTEMPTS LEFT!\n", maxattempt - i);
        }

        else if (guess < rnumber)
        {
            printf("TRY A HIGHER NUMBER;AND YOU HAVE ONLY %d ATTEMPTS LEFT!\n", maxattempt - i);
        }

        else
        {
            printf("YOU GUESSED IT RIGHT in just %d attempt\n", i);
            break;
        }
    }

    if (i > maxattempt)
    {
        printf("\nYOU REACHED YOUR LIMIT of %d ATTEMPTS \n BETTER LUCK NEXT TIME\n", maxattempt);
        printf("\nTHE NUMBER WERE:%d\n", rnumber);
    }

    return 0;
}
