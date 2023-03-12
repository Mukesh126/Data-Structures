#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

void display(struct node *head, struct node *temp){
    printf("Data are: ");
    temp=head;
    while (temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void main(){
    struct node *head, *new_node, *temp;
    head=0;
    int choice=1;
    while (choice==1)
    {
        new_node=(struct node *) malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&new_node->data);
        new_node->next=0;
        if (head==0)
            head=temp=new_node;
        else{
            temp->next=new_node;
            temp=new_node;
        }
        printf("Do u want to continue:\nOptions:\n \t1 for yes\n\t0 for not\n");
        scanf("%d",&choice);
    }
    display(head,temp);
}
