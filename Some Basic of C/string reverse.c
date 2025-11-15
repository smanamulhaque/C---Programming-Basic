#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="Anamul";
    char s2[50];
int i=0,j,len=0;
while(s1[i]!='\0'){
    i++;
    len++;
}
for(j=0,i=len-1; i>=0;i--,j++){
    
s2[j]=s1[i];
}
s2[j]!='\0';
printf("s1 = %s\n",s1);
printf("s2 = %s\n",s2);

    return 0;
}
