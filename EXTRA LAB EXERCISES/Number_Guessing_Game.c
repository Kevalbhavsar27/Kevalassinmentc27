#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    int maxAttempts = 10; 
   
    srand(time(0));

    secretNumber = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the number in %d attempt(s).\n", attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

        printf("Attempts left: %d\n\n", maxAttempts - attempts);
    }

    if (guess != secretNumber) {
        printf("Sorry! You've used all attempts. The number was %d.\n", secretNumber);
    }

    return 0;
}

