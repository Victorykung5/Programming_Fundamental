#include<stdio.h>
int main(){
    int a[8][8];
    int b,c,e,count;
    scanf("%d",&b);
    for(int i=0;i<8;i++){
     for(int j=0;j<8;j++){
        a[i][j]='-';
     } }
    for(int i=0;i<b;i++)
     {scanf("%d %d",&c,&e);
     a[c-1][e-1]='R';
     for(int j=0;j<9;j++)
     {if(a[j][e-1]!='R')
      a[j][e-1]='X';
      if(a[c-1][j]!='R')
      a[c-1][j]='X';
      }
     }
     count=0;
    for(int i=0;i<8;i++){
     for(int j=0;j<8;j++){
        printf("%c",a[i][j]);
        if(a[i][j]==45)
        {count=count+1;}
        }
     printf("\n"); }
   printf("= %d",count);
   return 0;     
    
}