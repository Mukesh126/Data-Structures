#include<stdio.h>

int difference(int a[], int b[], int c[], int m, int n){
    int i=0,j=0,k=0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            c[k++]=a[i++];
        else if (b[j] < a[i])
            j++;
        else{
            i++;
            j++;
        }
    }
    for ( ; i < m; i++)
    {
        c[k++]=a[i];
    }
    return 0;
}

int display(int c[], int o){
    for (int i = 0; i < o; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}

int main(){
    int a[]={5,6,7,9,12},b[]={1,2,5,8,9},c[4];
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    difference(a,b,c,m,n);
    int o=sizeof(c)/sizeof(c[0]);
    display(c,o);
    return 0;
}