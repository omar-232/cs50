#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int i, j, k;

    printf("Enter the height of the pattern: ");
    scanf("%d", &height);

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("/n");
    }
    return (0);
}