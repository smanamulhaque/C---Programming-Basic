
#include <stdio.h>

int main() {
int n,i,max=0;
int num[100];
printf("Enter the Number:\n");
scanf("%d",&n);

printf("Enter the element : \n");
for(i=0;i<n;i++){
    scanf("%d",&num[i]);
}
for(i=0;i<n;i++){
if(max<num[i]){
    max=num[i];

}

}
printf("Max number is ; %d\n",max);

    return 0;
}
