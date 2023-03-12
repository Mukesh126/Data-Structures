#include<stdio.h>
#include<stdlib.h>
void main(){
    // int A[3][4];
    // printf("Enter array elements: ");
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         scanf("%d",&A[i][j]);
    //     }
        
    // }
    // printf("Array elements are ");
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%d ",A[i][j]);
    //     }
    //     printf("\n");
    // }

    int *A[3];
    A[0]=(int *) malloc(4*sizeof(int));
    A[1]=(int *)malloc(4*sizeof(int ));
    A[2]=(int *)malloc(4 *sizeof(int));
    printf("Enter array elements: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Array elements are\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    
}