#include<stdio.h>
#include<stdlib.h>

struct matrix
{
    int *A;
    int n;
};

void set(struct matrix m,int i,int j, int x){
    if (i>=j)
        m.A[i*(i-1)/2 + j-1]=x;
}

void display(struct matrix m){
    printf("Elements are\n");
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            if (i>=j)
                printf("%d ",m.A[i*(i-1)/2 + j-1] );
            if (j>i)
                printf("%d ", m.A[j*(j-1)/2 + i-1]);
        } 
        printf("\n");
    }
}

int main(){
    struct matrix m;int x;
    printf("Enter dimension of matix: ");
    scanf("%d",&m.n);
    m.A= (int *)malloc(m.n * sizeof(int));
    printf("Enter all elements:\n");
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            scanf("%d",&x);
            set(m,i,j,x);
        } 
    }
    display(m);
}