#include<stdio.h>
int main(){
    //จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
    int a,b,c;
    printf("Enter number :");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c)
    printf("Min1 + Min2 =%d",c+b);
    else if(b>=a&&b>=c)
    printf("Min1 + Min2 =%d",c+a);
    else
    printf("Min1 + Min2 =%d",a+b);
    return 0;
}