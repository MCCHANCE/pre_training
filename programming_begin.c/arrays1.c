#include <stdio.h>

int main() 
{
    int scores[10];
    int i, j, temp;

    // Get scores of 10 individuals
    printf("Enter the scores of 10 individuals:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("Score for individual %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Sort the scores in ascending order
    for (i = 0; i < 9; i++) 
    {
        for (j = i + 1; j < 10; j++) 
	{
            if (scores[i] > scores[j]) 
	    {
                temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }

    // Print the sorted scores
    printf("Sorted scores from lowest to highest:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("%d\n", scores[i]);
    }

    return 0;
}
