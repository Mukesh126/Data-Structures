#include<stdio.h>
#include<string.h>

int main(){
    char s[]="Mukesh";
    int c=0;
    for (int i = 0; s[i]!= '\0'; i++)
        c++;
    printf("Length of string is %d",c);
    printf("\nLength of string is %d",strlen(s));
}