#include<stdio.h>

int sum(int a[], int n){
    int i=0,j=n-1;
    while (i<j)
    {
        if (a[i]+a[j]==10)
        {
            printf("%d + %d = 10\n",a[i],a[j]);
            i++;
            j--;
        }
        else if (a[i]+a[j]>10)
            j--;
        else
            i++;
    }
    
}

int main(){
    int a[]={0,1,3,4,5,6,8,9,10,12,14};
    int n=sizeof(a)/sizeof(a[0]);
    sum(a,n);
}