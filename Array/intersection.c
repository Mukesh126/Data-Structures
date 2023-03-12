#include<stdio.h>

int intersection(int a[],int b[],int c[], int m, int n){
    int i=0,j=0,k=0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else{
            c[k++]=a[i++];
            j++;
        }
    }
    for ( ; i < m; i++)
        c[k++]=a[i];
    for ( ; j < n; j++)
        c[k++]=b[j];
    
    return 0;
}

int display(int c[],int o){
    printf("Elements after intersection: \n");
    for (int i = 0; i < o; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
    
}

int main(){
    int a[]={5,23,34,45,78},b[]={8,34,39,40,50},c[5];
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    int o=sizeof(c)/sizeof(c[0]);
    intersection(a,b,c,m,n);
    display(c,o);

}