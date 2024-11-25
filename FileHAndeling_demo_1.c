//Introduction to File
#include<stdio.h>
int main(){
File *file;
file=fopen("test.txt","W");
if(file==NULL){
    printf("File doesn't exist");
}
else{
    printf("File is opened");
    fclose(file);
    getch(); 
}
