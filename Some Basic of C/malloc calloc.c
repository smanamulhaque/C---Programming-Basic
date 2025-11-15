#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("pointer in c.\n");
    int x=10;
    int *ptr1,*ptr2;
  
    ptr1=(int *)malloc(20);
    ptr2=(int *)calloc(5,sizeof(int));
    if(ptr1==NULL || ptr2==NULL){
        printf("Memory is not allocated.\n");
    }
    else{
        printf("memory is allocated");
        ptr1=realloc(ptr1,50);
        printf("memory reallocation successfully");
        
    }
    //do you work 
    //free(ptr);
    //printf("memory freed succesfully.\n");

return 0; 
}
