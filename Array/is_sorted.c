#include<stdio.h>
int is_sorted(int a[], int n){

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i+1])
        {
            return 0;
        }
    }
    return 1;
    
}

int main(){
    int a[]={1,2,3,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int result=is_sorted(a,n);
    if (result==1)
        printf("It's sorted");
    else
        printf("Not sorted");
}