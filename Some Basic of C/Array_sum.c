#include<stdio.h>
int main(){

int n,sum=0;
printf("Enter the number :");
scanf("%d",&n);
int a[n];
printf("Enter the element : \n");
for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for (int i=0;i<n;i++){
    sum=sum+a[i];

}
  printf("The sum is : %d\n",sum);
	return 0;
}
