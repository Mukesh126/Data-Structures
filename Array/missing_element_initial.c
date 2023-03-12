#include<stdio.h>

int missing(int a[], int n, int sum){
    int s=0;
    for (int i = 0; i < n; i++)
        s=s+a[i];
    int diff= sum-s;  
    printf("Missing element is %d",diff);
    return 0;
}

int main(){
    int a[]={1,2,3,4,5,6,8,9,10,11,12};
    int n=sizeof(a)/sizeof(a[0]) + 1;
    int sum= (n*(n+1))/2;
    missing(a,n,sum);
}