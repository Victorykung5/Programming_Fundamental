#include<stdio.h>
int main(){
    //จงเขียนโปรแกรมเพื่อรับตัวเลข 3 ตัว แล้วหาตัวเลขที่มีค่าน้อยที่สุด (Level 1)
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    int tmp;
    int i=0;
     do
    {  if(i < 2 && a[i] > a[i+1])
        {
            tmp = a[i];
            a[i] = a[i+1];
            a[i+1] = tmp;
            i = 0;
        }
        else
        {
            i++;
        }
         
    }while(i < 3);
    printf("Min = %d ",a[0]);
}