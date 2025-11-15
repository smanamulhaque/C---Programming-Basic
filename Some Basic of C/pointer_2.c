#include<stdio.h>
int main(){
	int x=5;
     int *ptr;
     ptr = &x;
     printf("Valu of x =%d \n",x);
          printf("address  of x =%d \n",ptr);
     printf("Address of x =%d \n",&x);
          printf("Valu of x =%d \n",*ptr);

	return 0;
}
