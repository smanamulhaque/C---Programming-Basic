 #include<stdio.h>
int main(){
int position=-1;
int value;
int n;
int array[100];

printf("Enter the size of array :");
scanf("%d",&n);
printf("Input the array element \n");
for(int i=0;i<n;i++){
	scanf("%d",&array[i]);
}
printf("Enter the value to you want to search : ");
    scanf("%d", &value);
    
for(int i=0;i<n;i++){
    if(value==array[i]){
        position=i+1;
        break;
    }
}
 if(position == -1){
     printf("value is not found\n");
 }
 else{
printf("the value is found at %d position\n",position);   
}

	return 0;
}
