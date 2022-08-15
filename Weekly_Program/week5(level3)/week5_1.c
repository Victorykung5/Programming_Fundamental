#include <stdio.h>
int main()
{
    int a, k;
    scanf("%d", &a);
    int b = 1, c = 2 * a - 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= 2 * a - 1; j++)
        {
            if (j <= b || j >= c)
                printf("*");
            else
                printf(" ");
        }
        b++;
        c--;
        printf("\n");
    }
    c += 2;
    b -= 2;
    for (int i = 1; i <= a - 1; i++)
    {
        for (int j = 1; j <= 2 * a - 1; j++)
        {
            if (j <= b || j >= c)
                printf("*");
            else
                printf(" ");
        }
        b--;
        c++;
        printf("\n");
    }
}