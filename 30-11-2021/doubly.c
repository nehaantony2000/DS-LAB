
#include<stdio.h>
#include<stdlib.h>
struct node
{

int data;
struct node *next;
struct node *prev;
};
typedef struct node NODE;
NODE *head = NULL;
NODE *rear=NULL;

void main()
{
int ch;

do
{
    printf("Menu DRIVEN \n 1.insertion at begin \n 2.Insertion at the end \n 3.display \n 4.delete at the begin \n 5.delete at the end \n 6.exit ");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {

        case 1: inbegin();
                break;
        case 2 : inend();
               break;
        case 3:display();
                break;
        case 4: delbegin();
                break;
        case 5: delend();
                break;
        case 6: exit(0);
                break;
        default:printf("wrong choice");

    }
}while(ch<6);
}
void inbegin()
{
    NODE *start;
    int item;
      printf("enter the new item");
   scanf("%d",&item) ;
  start=(struct node*)malloc(sizeof(item));
start->data=item;
 if(head==NULL)
 {

  start->prev=start->next=NULL;
  head=start;
  rear=start;

 }
 else
 {
     start->prev=NULL;
     start->next=head;
     head=start;

}
}
void display()
{

    NODE *first;
    first=head;
    while(first->next!=NULL)
        {printf("%d \n",first->data);
         first=first->next;
        }
        printf("%d \n",first->data);
}
void inend()
{

    NODE *start;
    int item;
    start  =(struct node*)malloc(sizeof(struct node));
    printf("enter the item");
    scanf("%d",&item);
    start->data=item;
    start->next=NULL;
    if(head==NULL)
    {
        start->prev=start->next=NULL;
        head=rear=start;
        }
    else
        {
        start->next=NULL;
        rear->prev=rear;
        rear->next=start;
        rear=start;

    }

}
void delbegin()
{
    NODE *temp;
    if(head==NULL)
    {
        printf("empty");

    }
    else if(head->next==NULL)
    {
        temp=head;
        head=rear=NULL;
        free(temp);

    }
    else
    {
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
    }
}
void delend()
{
    NODE *temp;
    if(head==NULL)
    {
        printf("empty");
        return;

    }
    else if(head->next==NULL)
    {

        temp=head;
        head=rear=NULL;
        free(temp);

    }
    else
    {

    temp=rear;
    rear=rear->prev;
    rear->next=NULL;
    free(temp);
    }
}
