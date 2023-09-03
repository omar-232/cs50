#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size = 0;
    int end_size = 0;
    int years = 0;

    // Prompt for start size
    while (start_size < 9)
    {
        printf("Enter the starting population size (must be at least 9): ");
        scanf("%d", &start_size);
    }
    // Prompt for end size
    while (end_size < start_size)
    {
        printf("Enter the ending population size (must be greater than or equal to the starting size): ");
        scanf("%d", &end_size);
    }

    // Calculate the number of years
    while (start_size < end_size)
    {
        start_size += (start_size / 3) - (start_size / 4);
        years += 1;
    }

    // Print the number of years
    printf("Years: %d\n", years);

    return 0;
}
