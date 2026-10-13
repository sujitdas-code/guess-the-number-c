#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int random_number = (rand() % 100) + 1;
    int guessed_number;
    int max_attempts = 7;
    int no_of_guesses = 0;

    printf("You have %d attempts\n", max_attempts);
    do
    {
        printf("Your guess: ");
        scanf("%d", &guessed_number);
        if (guessed_number < random_number)
        {
            printf("Higher number please!\n");
        }
        else if (guessed_number > random_number)
        {
            printf("Lower number please!\n");
        }
        else
        {
            printf("Congrats!\n");
        }
        no_of_guesses++;

    } while (guessed_number != random_number && no_of_guesses < max_attempts);
    if (guessed_number == random_number)
    {
        int score = 100 - ((no_of_guesses - 1) * 15);

        printf("You guessed the number in %d guesses\n", no_of_guesses);
        printf("Your score is %d\n", score);
    }

    else
    {
        printf("Game over! The number was %d\n", random_number);
    }
    return 0;
}