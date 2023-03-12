#include<stdio.h>
int get(int array[],int n,int element){
    for (int i = 0; i < n; i++)
    {
        if (array[i]==element){
            printf("\nElement found at %d index.",i+1);
            return 0;
        }   
    }  
    return -1;   
}

int set(int array[],int n,int element, int index){
    if (index>=0 && index < n)
    {
        array[index]=element;
    }
    
}

int display(int array[], int n){
    printf("\nElements are ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    
}

int main(){
    int array[]={23,43,42,523,532,42,42};
    int n=sizeof(array)/sizeof(array[0]);
    display(array,n);
    int x=1;
    int result=get(array,n,x);
    if (result==-1)
    {
        printf("\nElement %d not found", x);
    }
    set(array,n,1,1);
    display(array,n);
    
}