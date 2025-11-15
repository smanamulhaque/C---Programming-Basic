#include<stdio.h>
int main(){
int position,value1,value2;
int n;
int array[100];

printf("Enter the size of array :");
scanf("%d",&n);
printf("Input the array element : \n");
for(int i=0;i<n;i++){
	scanf("%d",&array[i]);
}
printf("Input the position whare you want to insart the value : ");
scanf("%d",&position);

/*if (position < 0 || position > n) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", n);
        return 1;  // Exit the program if the position is invalid
    }*/

printf("Enter the value to insert: ");
    scanf("%d", &value);
printf("Enter the value to insert: ");
    scanf("%d", &value2);

for(int i=n;i>position;i--){
	array[i]=array[i-1];
}

 


array[position]=value
array[position+1]=value;
n=2;

printf("After the insartation :\n");
for(int i=0;i<=n;i++){
	printf("%d\n",array[i]);
}

	return 0;
}
