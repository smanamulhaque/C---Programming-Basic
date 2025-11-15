//Reading a file using fgets()
#include<stdio.h>
int main(){
    char ch[40];
File *file;
file=fopen("test.txt","r");
if(file==NULL){
    printf("File doesn't exist");
}
else{
    printf("File is opened\n");
    //fgets(variable,size,filepointer);
    while(!feof(file)){
    fgets(ch,39,file);
    printf("%s\n",ch);
    fclose(file);
    }
    getch(); 
}
