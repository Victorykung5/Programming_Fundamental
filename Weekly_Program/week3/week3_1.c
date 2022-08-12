#include<stdio.h>
int main(){
    //จงเขียนโปรแกรมเพื่อรับตัวเลข 3 ตัว แล้วหาตัวเลขที่มีค่าน้อยที่สุด (Level 1)
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c)
    printf("Max = %d",a);
    else if(b>=a&&b>=c)
    printf("Max = %d",b);
    else 
    printf("Max = %d",c);
    return 0;
}
