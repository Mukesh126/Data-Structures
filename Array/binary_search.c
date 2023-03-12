#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int a[10];
    int size;
    int length;
};
void display(struct Array arr){
    printf("\n Elements are\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ",arr.a[i]);
    }
}
 
int binSearch(struct Array arr,int key){
    int l=0,h=arr.length-1,mid;
    while (l<=h)
    {   
        mid=(l+h)/2;
        if (key==arr.a[mid])
            return mid;
        else if (arr.a[mid]< key )
            h=mid+1;
        else
            l=mid-1;
    }
    return -1;
}
int main(){
  
    struct Array arr1={{5,8,10,35,46},10,5};
    printf("\n %d ",binSearch(arr1,10));
    display(arr1);
    return 0;
   
}