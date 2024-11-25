//Writing to a file using fputc()
#include<stdio.h>
int main(){
File *file; 
char name[20]="Anamul haque";
int length = strlen(name);
int i;
file=fopen("test.txt","W");
if(file==NULL){
    printf("File doesn't exist");
}
else{
    printf("File is opened");
    for(i=0;i<length;i++){
        fputc(name[i],file);
    }
    printf("File is written successfully\n");
    fclose(file);
}
    getch(); 
}
