#include<stdio.h>
#include<stdlib.h>

int max(int a[], int n){
    int max=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max=a[i];
        }
    }
    return max;
}

int min(int a[], int n){
    int min=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min=a[i];
        }
    }
    return min;
}

int missing(int H[],int a[],int l,int h, int n){
    for (int i = 0; i < n; i++)
    {
        H[a[i]]++;
    }
    for (int i = l; i <=h; i++)
    {
        if (H[i]==0)
            printf("Missing element is %d\n",i);
        
    }
    
}

int display(int H[],int l,int h){
    for (int i = 0; i <=h; i++)
    {
        printf("%d ",H[i]);
    } 
}

int main(){
    int a[]={3,7,4,9,12,6,1,11,2,10};
    int n=sizeof(a)/sizeof(a[0]);
    int h=max(a,n);
    int l=min(a,n);
    int *H=(int *) malloc(h * sizeof(int));
    //display(H,l,h);
    missing(H,a,l,h,n);
}