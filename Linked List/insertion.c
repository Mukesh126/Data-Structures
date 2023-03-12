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

void insert(int pos, int x){
    temp=(struct node*) malloc(sizeof(struct node));
    temp->data=x;
    q=head;
    for (int i = 0; i < pos-1; i++)   
    {
        q=q->next;
    }
    temp->next=q->next;
    q->next=temp;
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
    int a[]={1,3,5,7,9};
    int n=sizeof(a)/sizeof(a[0]);
    create(a,n);
    display();
    insert(5,70);
    display();
}