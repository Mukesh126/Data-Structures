#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[5]={1,2,3,4,5},b[10], choice;
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for ( int i = 0; i < 5; i++)
    {
        b[i]=a[i];
    }
    printf(" \n 1 for continue \n 0 for not \n Do u want u enter array elements:");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("\nEnter array elements: ");
        for (int i ; i < 10; i++)
        {
            scanf("%d",&b[i]);
        }
    }
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ",b[i]);
    }
    
}