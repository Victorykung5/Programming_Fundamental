#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b = a;
    if (b % 2 == 0)
    {
        b--;
    }
    int c = (b + 1) / 2;
    int d = c;
    for (int i = 1; i <= (a + 1) / 2; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (j == c || j == d)
                printf("*");
            else
            {
                printf("-");
            }
        }
        c++;
        d--;
        printf("\n");
    }
    if (a % 2 == 1)
    {
        c -= 2;
        d += 2;
    }
    else
    {
        c -= 1;
        d += 1;
    }
    for (int i = 1; i <= a / 2; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (j == c || j == d)
                printf("*");
            else
            {
                printf("-");
            }
        }
        c--;
        d++;
        printf("\n");
    }
}