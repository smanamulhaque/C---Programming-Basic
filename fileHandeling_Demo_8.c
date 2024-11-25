//Reading a file using fscanf()
#include<stdio.h>
int main(){
File *file;
char fname[30];
char lname[30];
int age;

file=fopen("test.txt","W");
if(file==NULL){
    printf("File doesn't exist");
}
else{
    printf("File is opened");
    //fscanf(filepointer,formatespacefire,variable name)
    fscanf(file,%s\t%s\t%d,&fname,&lname,&age);
    printf("%s\t%s\t%d\n",fname,lname,age);
    fclose(file);
    getch(); 
}
