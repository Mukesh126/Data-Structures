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

int sum(){
    temp=head;
    int sum=0;
    while (temp!=0)
    {
        sum=sum+temp->data;
        temp=temp->next;
    }
    return sum;
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
    printf("\nSum of LL are %d",sum());
}