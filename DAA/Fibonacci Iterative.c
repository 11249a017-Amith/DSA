#include <stdio.h>

int main(void)
{
    int terms;
    int first = 0, second = 1, next = 0;

    /* Prompt user for input */
    printf("Enter the number of terms: ");
   
    /* Validate input */
    if (scanf("%d", &terms) != 1 || terms <= 0)
    {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    printf("\nFibonacci Series (Iterative Method):\n");

    /* Generate Fibonacci sequence */
    for (int i = 0; i < terms; i++)
    {
        if (i == 0)
        {
            next = 0;
        }
        else if (i == 1)
        {
            next = 1;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
    }

    printf("\n");

    return 0;
}
