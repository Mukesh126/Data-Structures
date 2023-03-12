#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=0, *temp,*last,*p,*q;

void create(int a[],int n){
    head=(struct node*)malloc(sizeof(struct node));
    head->data=a[0];
    head->next=0;
    last=head;
    for (int i = 1; i < n; i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=a[i];
        temp->next=0;
        last->next=temp;
        last=temp;
    } 
}

int sorted(){
    int x=0;
    while (p!=0)
    {
        if (p->data < x)
            return 0;
        x=p->data;
        p=p->next;
    }
    return 1;   
}

void display(){
    printf("Data are: ");
    temp=head;
    while (temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void main(){
    int a[]={1,3,15,9,15};
    int n=sizeof(a)/sizeof(a[0]);
    create(a,n);
    display();
    printf("\n%d",sorted());
    
}