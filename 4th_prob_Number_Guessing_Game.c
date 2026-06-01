#include <stdio.h>

/*
Number Guessing Game
- Secret number is fixed (58)
- User guesses the number
- Program gives hints:
    -> Too big
    -> Too small
    -> Correct
*/

int main()
{
    // Fixed secret number that user needs to guess
    int secretNumber = 58;

    // Variable to store user's guess
    int guessingNum;

    // Take input from user (first guess)
    scanf("%d", &guessingNum);

    // Infinite loop (but will break after one check)
    while (1)
    {
        // If guess is greater than secret number
        if (guessingNum > secretNumber)
        {
            printf("Too big");
            break; // stop program
        }

        // If guess is smaller than secret number
        else if (guessingNum < secretNumber)
        {
            printf("Too small");
            break; // stop program
        }

        // If guess is correct
        else
        {
            printf("Correct 🎉");
            break; // stop program
        }
    }

    return 0;
}