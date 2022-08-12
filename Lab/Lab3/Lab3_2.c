#include <stdio.h>
int main()
{
    int a = 0;
    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            if (i % j == 0)
                a = a + j;
        }
        if (a == i)
        {
            printf("%d ", a);
        }
        a = 0;
    }
    return 0;
}