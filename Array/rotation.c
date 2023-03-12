#include<stdio.h>

int leftRotation(int a[],int n){
    int x=a[0];
    for (int i = 0; i < n; i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=x;
    return -1;
}

int rightRotation(int a[],int n){
    int x=a[n-1];
    for (int i = n-1; i >=0; i--)
    {
        a[i+1]=a[i];
    }
    a[0]=x;
    
}


int display(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}

int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    printf("\nBefore rotation:\n");
    display(a,n);
    rightRotation(a,n);
    printf("\nAfter rotation:\n");
    display(a,n);
}