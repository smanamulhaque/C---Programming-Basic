#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("Enter a positive Number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){// for odd i =0 and for even i = 1 start. 
        sum=sum+i;
    }
    printf("sum = %d",sum);
    return 0;
}Imtabu
