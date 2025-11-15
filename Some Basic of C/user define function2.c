#include<stdio.h>

float add(float a, float b){
    return a+b;
}
float subtract (float a, float b){
    return a-b;
}
float multiply (float a, float b){
    return a*b;
}
float divide (float a, float b){
    return a/b;
}

int main(){
float a,b;
printf("Enter the value of a and b :  ");
scanf("%f%f",&a,&b);
float add_result = add(a,b);
float subtract_result = subtract(a,b);
float multiply_result =multiply(a,b);
float divide_result = divide(a,b);
printf("add = %f,subtract = %f, multiply = %f,divide  = %f \n" ,add_result ,subtract_result,multiply_result,divide_result);
return 0;
}
