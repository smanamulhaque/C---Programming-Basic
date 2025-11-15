#include<stdio.h>
void print_divisor(int x){
    int i;
    for(i=1;i<=x;i++){
        if(x%i==0){
            printf("%d\n",i);
        }
    }
    
}

int main(){
    int a;
    printf("Enter a integer number : ");
    scanf("%d",&a);
   print_divisor(a);
return 0;
}

