#include<stdio.h>

int main(){
    char a[]="finding";
    int H[26]={0},flag=1;
    for (int i = 0; a[i]!='\0'; i++)
        H[a[i]-97]++;
    for (int i = 0; i < 26; i++)
    {
        if (H[i]>1)
        {
            printf("%c occurs ",i+97);
            printf("%d times\n",H[i]);
            flag=0;
        }
    }
    if (flag)
        printf("No duplicates in a string");
    
}