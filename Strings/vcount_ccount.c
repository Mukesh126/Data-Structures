#include<stdio.h>

int main(){
    char s[]="Mukesh";
    int ccount=0, vcount=0;
    for (int i = 0; s[i]!=0; i++)
    {
        if (s[i]=='A' || s[i]=='E' || s[i]=='I'  || s[i]=='O' || s[i]=='U' || s[i]=='a'  || s[i]=='e'
         || s[i]=='i' || s[i]=='o' || s[i]=='u')
            vcount++;
        else
            ccount++;
    }
    printf("Vowels count is %d\n",vcount);
    printf("Consonent count is %d\n",ccount);   
}