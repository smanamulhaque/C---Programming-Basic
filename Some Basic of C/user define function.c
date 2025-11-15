#include<stdio.h>
int get_sum(int x,int y){
    int sum =x+y;
    return sum;
}
void say_hi(){
    printf("Hi\n");
}
int main(){
 printf("main start\n");
 say_hi();
 int result = get_sum(10,20);
 printf("Result =%d",result);
return 0;
}
