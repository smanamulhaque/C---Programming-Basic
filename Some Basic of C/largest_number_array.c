#include<stdio.h>
int main(){
	
	int n,i,max=0;
	printf("Enter the number : \n");
	scanf("%d",&n);
	int x[i];
	printf("Enter the element : \n");
	for(i=0;i<n;i++){
		scanf("%d",&x[i]); 
	}
		for(i=0;i<n;i++){
		if(x[i]>max){
			max=x[i];
		}
	}
	  printf("The largest number in the array is: %d\n", max);
	return 0;
}
