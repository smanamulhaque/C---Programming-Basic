//storing student details
#include<stdio.h>
int main(){
    File *file;
    char name[30];
    int age,phone,num;
    file = fopen("student.txt","a");
    if(file==NULL){
        printf("File doesn't open\n");
    }
    else{
        printf("File is opened\n");
        printf("Enter number of Student:");
        scanf("%d",&num);
        for(int i=0;i<num;i++){
            printf("Enter student name : ");
            //gets(name);
            scanf("%s",&name);
            printf("Enter student age : ");
            scanf("%d",&age);
            printf("Enter student Phone Number : ");
            scanf("%d",&phone);
         fprintf(file,"\n%s\t\t%d\t%d\n",name,age,phone);   
        }
        fclose(file);
    }
    getch();
}
