#include<stdio.h>
int main(){
    char s1[50];
     int capital,small,digit,i;
    i=capital=small=digit=0;
    printf("Enter a string :");
    gets(s1);
    
    while(s1[i]!='\0'){
        if(s1[i]>=65 && s1[i]<=90)
        capital++;
        else if(s1[i]>=97 && s1[i]<=122)
        small++;
        if(s1[i]>=48 && s1[i]<=57)
        digit++;
        i++;
    }
    printf("Capital latters= %d\n",capital);
    printf("small latters= %d\n",small);
    printf("small latters= %d\n",digit);
return 0;
    
}
