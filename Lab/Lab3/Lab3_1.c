#include<stdio.h>
int main(){{
    printf("Enter number :");
    
    int a;
    scanf("%d",&a);
    int b=0;
    int c=0;
    do{while(a>0){
        b+=a%10;
        a=a/10;
    }
    a=b;
    b=0;
    }while(a>10);
    
    printf("%d",a);
}
return 0;
}