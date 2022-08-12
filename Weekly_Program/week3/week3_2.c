#include<stdio.h>
int main(){
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    int k;
    for(int i=0;i<3;i++)
     if(a[i]>a[i+1]&&i<2){
      k=a[i];
      a[i]=a[i+1];
      a[i+1]=k;
      i=-1;}
     printf("Max = %d",a[2]);
     return 0;
}