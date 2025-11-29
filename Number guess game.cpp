//number guessing game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	 int number, random,guess;
	int  attempts = 0;
	clock_t start, end;
	int no_of_guess=0;
	srand(time(NULL));
	printf("Welcome to number guessing game.\n");
	random=rand()%100+1;
	do
	{
		printf("\nI have picked a number between 1 and 100. Try to guess it!\n");
		printf("\nPlease enter your guess number between (1 to 100):\n");
	
		no_of_guess++;
		start = clock();
		 while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
		
		if(guess < random)
		{
			printf("\nGuess larger number.\n");
		}
		else if(guess > random)
		{
			printf("\nEnter smaller number.\n");
		}
		else
		{
			 end = clock();
            double time_taken = (double)(end - start) / CLOCKS_PER_SEC;

            printf("\n Correct! You guessed the number %d\n", random);
            printf(" Attempts: %d\n", attempts);
            printf("Time taken: %.2f seconds\n", time_taken);
            break;
			printf("\n Conguralation!!!! You have successfully guessed the number.\n",no_of_guess);
		}
	}
	}
	while(guess!=random);
	printf("\n Bye Bye. Thanks for playing.\n");
	printf("Developed by : DEEPIKA");
}

