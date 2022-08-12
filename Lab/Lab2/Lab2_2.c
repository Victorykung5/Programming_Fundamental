#include <Stdio.h>
int main()
{
    int a, b;
    printf("Enter first number :");
    scanf("%d", &a);
    printf("Enter second number :");
    scanf("%d", &b);
    int c;
    if (a < b)
        c = b;
    else if (b < a)
        c = a;
    while (c > 1)
        if (a % c == 0 && b % c == 0)
        {
            printf("Greatest common divisor = %d", c);
            break;
        }
        else
            c--;
    return 0;
}