#include <stdio.h>
int main()
{
    int a;
    printf("Enter :");
    scanf("%d", &a);
    int b = a - 1;
    int c = 1;
    for (int i = 1; i <= a; i++)
    {
        if (i == a)
        {
            for (int m = 1; m <= 2 * a - 1; m++)
            {
                printf("*");
            }
        }
        else if (i < a)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            for (int k = 1; k <= 2 * b - 1; k++)
            {
                printf(" ");
            }
            for (int l = 1; l <= i; l++)
            {
                printf("*");
            }
        }
        b--;
        printf("\n");
    }
    for (int n = a - 1; n >= 0; n--)
    {
        for (int e = 1; e <= n; e++)
        {
            printf("*");
        }
        for (int f = 1; f <= 2 * c - 1; f++)
        {
            printf(" ");
        }
        for (int g = 1; g <= n; g++)
        {
            printf("*");
        }
        printf("\n");
        c++;
    }
}