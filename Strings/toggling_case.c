#include<stdio.h>

int main(){
    char s[]="mUkEsh";
    for (int i = 0; s[i] !=0; i++)
    {
        if (s[i]>=65 && s[i]<=90)
            s[i]+=32;
        else 
            s[i]-=32;
    }
    printf("%s",s);
}