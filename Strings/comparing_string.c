#include<stdio.h>

int main(){
    char a[]="painter",b[]="painting";
    for (int i = 0,j=0; a[i] !='\0', b[j] !='\0' ; i++,j++)
    {
        if (a[i]!=b[j])
            break;
        if (a[i]==b[j])
            printf("They are equal\n");
        else if (a[i]<b[j])
            printf("%s is smaller\n",a[i]);
        else
            printf("%s is larger\n",b[j]);
    }
    //need to use flag for getting apt output
}