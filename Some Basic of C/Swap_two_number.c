#include<stdio.h>
int main(){
	int a,b,swap;
	printf("Enter value of a : \n");
	scanf("%d",&a);
	printf("Enter value of b : \n");
	scanf("%d",&b);
	 swap=a;
	 a=b;
	 b=swap;
	
	printf("The value of a = %d\n",a);
	printf("The value of b = %d\n",b);

	
	
	return 0 ;
}
