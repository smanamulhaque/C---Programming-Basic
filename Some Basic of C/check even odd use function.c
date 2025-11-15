#include<stdio.h>

void even_or_odd(int x){
    if(x%2==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
 even_or_odd(a);  
return 0;
}
