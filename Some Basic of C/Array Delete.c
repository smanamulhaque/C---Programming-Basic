
#include <stdio.h>
int main(){
int position,n,i;
int array[100];
printf("Enter the number of array :");
scanf("%d",&n);
printf("Enter the number of array :");
for(i=0;i<n;i++){
    scanf("%d",&array[i]);
}
printf("Enter the position you want to delete the array :");
scanf("%d",&position);

for(i=position;i<n-1;i++){
    array[i]=array[i+1];
}
n--;
printf("After array deletion :\n");
for(i=0;i<n;i++){
printf("%d\n",array[i]);
    
}

    return 0;
}
