#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
 NODE *top=NULL;
void main()
{
int ch;
do
{
    printf("Menu DRIVEN \n 1.push\n 2.pop \n 3.display\n 4.search \n 5.exit ");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {

        case 1: push();
                break;
       case 2 : pop();
                break;
        case 3 : display();
                break;
        case 4:search();
                break;
        case 5 :   exit(0);

                break;
        default:printf("wrong choice");

    }
}while(ch<4);
}

void push()
{
    int num;
   NODE *newNode;
   newNode= (struct node*)malloc(sizeof(struct node));
 printf("enter the num");
 scanf("%d",&num);
 newNode->data=num;
 if(top==NULL)
 {
     newNode->next=NULL;
     top=newNode;

 }
 else
 {
     newNode->next=top;
     top=newNode;

 }
}
void pop()
{
    NODE *temp;
if(top==NULL)
{
    printf("underflow");
    return 0;
}
else
{
    temp=top;
    top=temp->next;
    free(temp);
}

}
 void display()
{
    NODE*first;
    first=top;
    while(first!=NULL)
        {
            printf("%d \n",first->data);
         first=first->next;
        }
}
void search()
{
    NODE *temp;
    int item,flag=0;
    printf("enter the item to be searched");
    scanf("%d",&item);
    temp=top;
    while(temp->next!=NULL)
    {
    if(temp->data==item)
    {
        flag=1;
        break;
    }
    temp=temp->next;

}
if(flag==1)
    printf("item is found");
else
    printf("item not found");
}
