#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int i = 0, index = 0, lowerBound = 0, upperBound = 0, difference = 0, randomNumber = 0;

    srand(time(NULL));

    printf("Enter the lower bound: ");
    scanf("%d", &lowerBound);

    printf("Enter the upper bound: ");
    scanf("%d", &upperBound);

    difference = upperBound - lowerBound + 1;

    int randomNumbers[difference];

    for (i = 0; i < difference; i++)
    {
        randomNumbers[i] = 0;
    }

    i = 0;

    printf("\nThe random sequence of random numbers between %d and %d is:\n\n", lowerBound, upperBound);

    while (i < difference)
    {
        do
        {
            randomNumber = (rand() % difference) + lowerBound;
            index = randomNumber - lowerBound;
        }
        while (randomNumbers[index] != 0);

        randomNumbers[index] = 1;

        if (i < difference - 1)
        {
            printf("%d, ", randomNumber);
        }
        else
        {
            printf("%d\n", randomNumber);
        }

        i++;
    }

    getch();

    return 0;
}
