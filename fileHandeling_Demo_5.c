//Writing to a file using fprintf()
#include<stdio.h>
int main(){
    File *file;
    char name[40];
    int age;
    file=fopen("test.txt","a");//a appernt mode.
    if(file==NULL){
        printf("file doesnot exist\n");
    }
    else{
        printf("File is opened\n");
        printf("Enter your full name:");
        gets(name);
        printf("Enter your full age:");
        scanf("%d",&age);
        //fprintf(file pointer,formate specifiers,variable);
        fprintf(file,"Name =%s ,Age = %d\n",name,age);
        

      

        printf("File is writen successfully\n");
        fclose(file);
        
    }
}
