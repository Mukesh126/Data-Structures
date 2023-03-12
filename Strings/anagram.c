#include<stdio.h>

int main(){
    char a[]="observe",b[]="muki";
    int H[26]={0},i,j, flag=1;
    for ( i = 0; a[i]!='\0'; i++)
        H[a[i]-97]++;
    for ( j = 0; b[j]!='\0'; j++)
        H[a[i]-97]--;
    for ( i = 0; i < 26; i++)
    {
        if (H[i]==0)
            flag=0;   
    }
    if (flag==0)
        printf("Anagram");
    else
        printf("Not anagram");
}