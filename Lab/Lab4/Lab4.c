#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{   printf("Enter :");
    char a[9999];
    scanf("%s", a);
    int b = strlen(a);
    int i = 0;
    int c[b];
    for (i = 0; i <= b; i++)
    {
        c[i] = a[i];
    }
    i = 0;
    printf("Output :");
    int count = 0;
    int d = 0;
    while (i <= b)
    {
        if (c[i] >= 48 && c[i] < 58)
        {
            int f = i;
            while (c[f + 1] >= 48 && c[f + 1] < 58)
            {
                count++;
                f++;
            }
            int t = 0;
            for (int k = count; k >= 0; k--)
            {
                {
                    d += (c[i + t] - 48) * pow(10, k);
                }
                t++;
            }
            t = 0;
            for (int j = 1; j <= d; j++)
            {
                printf("%c", c[i + count + 1]);
            }
            i = i + count + 2;
        }
        else
        {
            {
                printf("%c", c[i]);
            }
            i++;
        }
        count = 0;
        d = 0;
    }
}