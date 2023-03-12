#include<stdio.h>

int missing(int a[],int length, int n){
   int k=a[n],s=0;
   int sum1=(k*(k+1))/2;
   int f=a[0]-1;
   int sum2=(f*(f+1))/2;
   int sum=sum1-sum2;
   for (int i = 0; i < length; i++)
        s=s+a[i];
   int diff=sum-s;
   printf("Missing element is %d ",diff);
}

int main(){
    int a[]={6,7,8,9,10,11,13,14,15,16,17};
    int length=sizeof(a)/sizeof(a[0])+1;
    int n=sizeof(a)/sizeof(a[0]);
    missing(a,length, n);

}