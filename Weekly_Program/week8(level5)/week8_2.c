#include<stdio.h>
int main(){
    int a[8][8];
    int b,c,e,count;
    scanf("%d",&b);
    int i,j;
    i=0;
    j=0;
        while(i<8){j=0;
     while(j<8){
        a[i][j]='-';
        j++;
     }i++;
     }
     i=0;
     j=0;
     while(i<b)
     {scanf("%d %d",&c,&e);
     a[c-1][e-1]='R';
     j=0;
     while(j<9)
     {if(a[j][e-1]!='R')
      a[j][e-1]='X';
      if(a[c-1][j]!='R')
      a[c-1][j]='X';
      j++;
      }i++;
     }
     i=0;
     j=0;
 
     count=0;
    while(i<8){
        j=0;
     while(j<8){
        printf("%c",a[i][j]);
        if(a[i][j]==45)
        {count=count+1;}
       
        j++;
        }
     printf("\n"); 
     i++;}
     printf("= %d",count);
   return 0;     
}