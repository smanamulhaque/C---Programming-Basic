#include<stdio.h>
int main(){
int left,right;
int n,num,mid;
int array[100];

printf("Enter the size of array :");
scanf("%d",&n);
printf("Input the array element : \n");
for(int i=0;i<n;i++){
	scanf("%d",&array[i]);
}
printf("Input the search the value : ");
scanf("%d",&num);
left=0;
right=n-1;
while(left<=right){
    mid=(left+right)/2;
    if(array[mid]==num){
        printf("Enter The number you want  found at index : %d\n",mid);
        return 0;
    }
    else if(array[mid]<num){
        left=mid+1;
    }
    else{
    
        right=mid-1;
    }
}
    printf("Item is not found\n");
    return 0;
}



