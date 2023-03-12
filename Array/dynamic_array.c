#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int *a;
    int size;
    int length;
};
 
void display(struct Array arr){
    printf("Elements are ");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ",arr.a[i]);
    }
}

void find(struct Array arr){
    int find;
    printf("\n Enter key to search: ");
    scanf("%d",&find);
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.a[i]==find){
            printf("Element found ");
        }
        else{
            printf("Not found ");
        }
    }
    
}
int main(){
  
    struct Array arr;int n;
    printf("Enter size of array: ");
    scanf("%d",&arr.size);
    arr.a=(int *) malloc(arr.size * sizeof(int));
    arr.length=0;
    printf("Enter no. of elements in array: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr.a[i]);
    }
    arr.length=n;
    display(arr);
    find(arr);
    return 0;
   
}