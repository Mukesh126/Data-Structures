#include<stdio.h>

int rightShift(int a[],int n){
    int x=15,i=n-2;
    while(a[i]>x)
    {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=x;
    
}

int display(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}

int main(){
    int a[9]={4,8,12,16,20,24,28,30};
    int n=sizeof(a)/sizeof(a[0]);
    printf("\nBefore inserting:\n");
    display(a,n);
    rightShift(a,n);
    printf("\nAfter inserting:\n");
    display(a,n);
}