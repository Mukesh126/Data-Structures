#include<stdio.h>

int main(){
    char a[]="medical", b[]="decimal";
    int H[26]={0},i,j,flag=0;
    for ( i = 0; a[i]!='\0'; i++);
    for ( j = 0; b[j]!='\0'; j++);
    if (i==j)
    {
        for ( i = 0; a[i]!='0'; i++)
            H[a[i]-97]++;
        for ( j = 0; b[j]!='\0'; i++)
            H[b[j]-97]--;
        for ( i = 0; i < 26; i++)
        {
            if (H[i]==0)
                flag=1;
        }
        if (flag)
            printf("Its a anagram");
        else
            printf("Not a anagram");   
    } 
    else
        printf("Not a anagram");
}