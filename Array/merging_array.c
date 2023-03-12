#include<stdio.h>

int merging(int a[], int b[], int c[], int m, int n){
    int i=0,j=0,k=0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            c[k++]=a[i++] ;
        else
            c[k++]=b[j++];
    }
    for ( ; i < m; i++)
        c[k++]=a[i];
    for ( ; j < n; j++)
        c[k++]=b[j];
    
    return -1;
}


int display(int c[],int o){
    for (int i = 0; i < o; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
    
}

int main(){
    int a[]={3,8,16,20,25,30}, b[]={4,10,12,22,23,31},c[15];
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    printf("\nElements in 1st array \n");
    display(a,m);
    printf("\nElements in 2nd array\n");
    display(b,n);
    merging(a,b,c,m,n);
    int o=sizeof(c)/sizeof(c[0]);
    printf("\nElements after merging \n");
    display(c,o);
    return -1;

}