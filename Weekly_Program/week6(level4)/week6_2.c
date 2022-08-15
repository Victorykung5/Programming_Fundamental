#include <stdio.h>
int main()
{
    int a;
    printf("Enter :");
    scanf("%d", &a);
    int b = a;
    if (a % 2 == 0)
    {
        b--;
    }
    int l = 0;
    int c = (b + 1) / 2 - 1;
    for (int i = 1; i <= (a + 1) / 2; i++)
    {
        for (int k = 1; k <= c; k++)
        {
            printf("-");
        }
        printf("*");
        for (int h = 1; h <= 2 * l - 1; h++)
        {
            printf("-");
        }
        if (i != 1)
        {
            printf("*");
        }
        for (int k = 1; k <= c; k++)
        {
            printf("-");
        }
        l++;
        c--;
        printf("\n");
    }
    c = 1;
    l -= 2;
    if (a % 2 == 0)
    {
        c = 0;
        l += 1;
    }
    for (int i = 1; i <= a / 2; i++)
    {
        for (int k = 1; k <= c; k++)
        {
            printf("-");
        }
        printf("*");
        for (int h = 1; h <= 2 * l - 1; h++)
        {
            printf("-");
        }
        if (i != a / 2)
        {
            printf("*");
        }
        for (int k = 1; k <= c; k++)
        {
            printf("-");
        }
        l--;
        c++;
        printf("\n");
    }
}