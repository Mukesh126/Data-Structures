#include<stdio.h>

int main(){
    int a[3][3], flag=1;
    printf("Enter matrix elements:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j]!=a[j][i]){
                flag++;
                break;
            }
        }    
    }
    if (flag==1)
        printf("It's symmetric");
    else
        printf("Not symmetric");

    return 0;
}