#include<stdio.h>
#include<stdlib.h>

struct matrix
{
    int *A;
    int n;
};

void set(struct matrix m, int i, int j, int x){
    if (i-j == 1)
        m.A[i-2]=x;
    if (i-j==0)
        m.A[m.n-1+i-1]=x;
    if (i-j==-1)
        m.A[2*m.n-1+i-1]=x;
}

int get(struct matrix m, int i, int j){
    if (i-j == 1)
        return m.A[i-2];
    if (i-j==0)
        return m.A[m.n-1+i-1];
    if (i-j==-1)
        return m.A[2*m.n-1+i-1];
}

void display(struct matrix m){
  printf("Matrix elements are:\n");
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            if (i-j == 1)
                printf("%d ",m.A[i-2]);
            else if (i-j==0)
                printf("%d ",m.A[m.n-1+i-1] );
            else if (i-j==-1)
                printf("%d ",m.A[2*m.n-1+i-1]); 
            else
                printf("0 ");
        }
        printf("\n");
    }  
}

int main(){
    struct matrix m;
    int x;
    printf("Enter dimension: ");
    scanf("%d",&m.n);
    m.A=(int *)malloc(3*m.n-2 * sizeof(int));
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