#include<stdio.h>

struct matrix
{
    int A[10];
    int n;
};

void set(struct matrix *m, int i, int j,int x){
    if (i==j)
        m->A[i-1]=x;
}

int get(struct matrix m, int i, int j){
    if (i==j)
        return m.A[i-1];
    else
        return 0;
}

int display(struct matrix m){
    for (int i = 0; i < m.n; i++)
    {
        for (int j = 0; j < m.n; j++)
        {
            if (i==j)
                printf("%d ",m.A[i]);
            else
                printf("0 ");
        } 
        printf("\n");
    }
}

int main(){
    struct matrix m;
    m.n=4;
    set(&m,1,1,1),set(&m,2,2,2),set(&m,3,3,3),set(&m,4,4,4);
    display(m);
    printf("\n");
    printf("%d ", get(m,3,3));
}