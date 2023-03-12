#include<stdio.h>

int main(){
    char a[]="wow",b[5];
    int i,j,flag=0;
    for (i = 0; a[i]!='\0'; i++);
    i=i-1;
    for (j = 0; i>=0; i--,j++)
        b[j]=a[i];
    b[j]='\0';
    for ( i = 0,j=0; a[i]!='\0',b[j]!='\0'; i++,j++)
    {
        if (a[i]==b[j])
            flag=1;
    }
    if (flag)
        printf("Its a palindrome");
    else
        printf("Not a palindrome");
    return 0;
}