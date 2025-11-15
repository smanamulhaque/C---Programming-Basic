// Reading a file using fgetc()
#include<stdio.h>
int main(){
File *file;
char ch;
file=fopen("test.txt","r");
if(file==NULL){
    printf("File doesn't exist");
}
else{
    printf("File is opened");
    while(!feof(file)){
        ch=fgetc(file);
        printf("%c",ch);
        fclose(file);
    }
    getch(); 
}
