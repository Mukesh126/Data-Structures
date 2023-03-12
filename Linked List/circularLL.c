#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=0, *temp,*last;

void create(int a[],int n){
    head=(struct node*)malloc(sizeof(struct node));
    head->data=a[0];
    head->next=head;
    last=head;
    for (int i = 1; i < n; i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=a[i];
        temp->next=last->next;
        last->next=temp;
        last=temp;
    } 
}

void display(){
    printf("Data are: ");
    temp=head;
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }while (temp!=head);
}

void main(){
    int a[]={1,3,5,7,9};
    int n=sizeof(a)/sizeof(a[0]);
    create(a,n);
    display();
}