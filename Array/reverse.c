#include<stdio.h>

int reverse(int a[],int b[],int n){
    for (int j=0, i=n-1 ;j < n-1, i >= 0;j++,i--)
    {
        b[j]=a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        a[i]=b[i];
    }
    return -1;
}

int reverse2(int a[],int n){
    int temp;
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    
}
int display(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d " ,a[i] );
    } 
}

int main(){
    int a[]={1,2,3,4,5,6}, b[6];
    int n=sizeof(a)/sizeof(a[0]);
    printf("Before reversing:\n ");
    display(a,n);
    reverse2(a,n);
    printf("\nAfter reversing:\n ");
    display(a,n);
    printf("\n\n");
    
    printf("Before reversing:\n ");
    display(a,n);
    reverse(a,b,n);
    printf("\nAfter reversing:\n ");
    display(a,n);

}