#include<stdio.h>
int binSearch(int array[],int low,int high, int key){
    
    while (low<=high )
    {   int mid=low+high/2;

        if (array[mid]==key)
            return mid;
        else if (key<array[mid])
            return high=mid-1;
        else
            return low=mid+1;
    }
    return -1;
    
}

int display(int array[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
    
}
int main(){
    int array[]={3,4,5,6,7,8,9};
    int n=sizeof(array)/sizeof(array[0]);
    int result=binSearch(array,0,n-1,9);
    if (result == -1)
        printf("Element not found");
    else
        printf("Element is found at %d index\n",result);
    
    printf("Elements are ");
    display(array,n);
    return 0;
    
}