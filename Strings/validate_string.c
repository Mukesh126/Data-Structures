#include<stdio.h>

int validate(char s[]){
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (!(s[i]>=65 && s[i]<=90) && !(s[i]>=97 && s[i]<=112) && !(s[i]>=48 && s[i]<=57))
        {
            return 0;
        }
    }
    return 1;
    
}

int main(){
    char s[]="Ani@321";
    printf("String is %s\n",s);
    if (validate(s))
        printf("Valid string");
    else
        printf("Invalid string");
    return 0;
}