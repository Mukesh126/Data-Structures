#include<stdio.h>

int swap(int x, int y){
    int temp= x;
    x=y;
    y = temp;
    return 0;
}

int display(int a[], int n){
    printf("Elements are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}

int main(){
    int a[]={54,32,45,2,78};
    int n=sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i+1])
        {
            swap(a[i], a[i+1]);
        } 
    }
    display(a,n);
    
}