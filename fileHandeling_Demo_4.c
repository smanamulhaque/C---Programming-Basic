//Writing to a file using fprintf()
#include<stdio.h>
int main(){
    File *file;
    char name[40];
    file=fopen("test.txt","a");//a appernt mode.
    if(file==NULL){
        printf("file doesnot exist\n");
    }
    else{
        printf("File is opened\n");
        printf("Enter your full name:");
        gets(name);
        fputs(name,file);
        fputs("\n",file);

        printf("File is writen successfully\n");
        fclose(file);
        
    }
}
