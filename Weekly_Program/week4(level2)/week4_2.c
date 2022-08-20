#include <stdio.h>
int main()
{
    //จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
    int a[3];
    printf("Enter numbers :");
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    int k;
    for (int i = 0; i < 3; i++)
    {
        if (i < 2 && a[i] > a[i + 1])
        {
            k = a[i];
            a[i] = a[i + 1];
            a[i + 1] = k;
            i = -1;
        }
    }
    printf("Min1 + Min2 = %d", a[0] + a[1]);
    return 0;
}