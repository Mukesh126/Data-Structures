#include<stdio.h>

int sum(int a[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]+a[j]==10)
            {
                printf("%d + %d = 10\n", a[i],a[j]);
            }   
        } 
    }
    
}

int main(){
    int a[]={6,3,8,10,16,7,5,2,9,0};
    int n=sizeof(a)/sizeof(a[0]);
    sum(a,n);
}