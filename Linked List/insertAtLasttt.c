#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=0, *temp,*last;



void InsertLast(int x){
    temp=(struct node *) malloc(sizeof(struct node));
    temp->data=x;
    temp->next=0;
    if (head==0)
    {
        head=last=temp;
    }
    else{
        last->next=temp;
        last=temp;
    }
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
    display();
    InsertLast(0);
    InsertLast(10);
    InsertLast(20);
    InsertLast(30);
    InsertLast(40);
    InsertLast(50);
    display();
}