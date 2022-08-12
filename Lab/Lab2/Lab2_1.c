#include <stdio.h>
int main()
{   //65010244 นาย ฐานิฏฐ์ ก้องสมุทร
    int a;
    printf("Enter number :");
    scanf("%d", &a);
    int b = 2;
    printf("Factoring Result :");
    while (a > 1)
    {
        while (a % b == 0)
        {
            if (a == b)
            {
                printf("%d\n", b);
            }
            else
            {
                printf("%d x ", b);
            }
            a = a / b;
        }
        b++;
    }
    printf("65010244");
    return 0;
}