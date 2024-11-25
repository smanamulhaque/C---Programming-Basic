//Writing to a file using fputs()
#include<stdio.h>
int main(){
    File *file;
    char name[40];
    file=fopen("test.txt","W");//W overwrite
    if(file==NULL){
        printf("file doesnot exist\n");
    }
    else{
        printf("File is opened\n");
        printf("Enter your full name:");
        gets(name);
        fputs(name,file);
        printf("File is writen successfully\n");
        fclose(file);
        
    }
}
