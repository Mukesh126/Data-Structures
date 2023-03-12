#include<stdio.h>

int leftShift(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        a[i]=a[i+1];
    }
    return -1;
}

int rightShift(int a[],int n){
    for (int i = n-1; i >=0; i--)
    {
        a[i+1]=a[i];
    }
    
}

int display(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}

int main(){
    int a[6]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    printf("\nBefore shifting:\n");
    display(a,n);
    rightShift(a,n);
    printf("\nAfter shifting:\n");
    display(a,n);
}