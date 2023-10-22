#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry point to program
 * 
 * Return: Always(0)
*/
int main()
{
    int number, guess, num_of_guess;

    num_of_guess = 1;

    srand(time(0));
    /*Generate random number between 1 and 20 */

    number = rand()%20 + 1;

    while (guess != number)
    {
        printf("Guess the number between 1 and 20\n");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("You guessed higher, try again\n");
        }
        else if (guess < number)
        {
            printf("You guessed lower, try again\n");
        }
        else{
            printf("Yes!, you guessed the correct number good guess\n");
            printf("attempts : %d\n", num_of_guess);
        }
        num_of_guess++;
        
    }

    return (0);
}
	