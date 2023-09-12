#include <stdio.h>

int main() {
    int height;
    int i, j, k;

    do {
    printf("Enter the height of the pattern: ");
    scanf("%d", &height);
    } while (height > 1 && height < 9);

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        for (k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}