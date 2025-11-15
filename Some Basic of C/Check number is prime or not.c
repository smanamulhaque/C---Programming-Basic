//C Program to Check for Prime Number or not.
#include<stdio.h>
int main(){
	int num;
	printf("Enter a positive number :");
    scanf("%d",&num);
    
	if(num<=1){
		printf(" %d is not a prime nuber\n",num);
	} 
	
	else{
		for(int i=2;i<num;i++){
			if(num%i==0){
				printf("%d is not a prime number\n",num);
				return 0;
			}
		}
		
	printf("%d is prime number\n",num);	
	}
	
	return 0;
}
