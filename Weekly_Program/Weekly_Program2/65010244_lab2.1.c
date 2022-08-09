#include<stdio.h>
int main(){
    //จงเขียนโปรแกรมเพื่อรับตัวเลข 3 ตัว แล้วหาตัวเลขที่มีค่าน้อยที่สุด (Level 1)
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b&&a<=c)
    printf("min = %d",a);
    else if(b<=a&&b<=c)
    printf("min = %d",b);
    else if(c<=a&&c<=b)
    printf("min = %d",c);
    return 0;
}