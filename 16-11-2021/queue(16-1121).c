
#include<process.h>
#include<stdio.h>
#define MAXSIZE 5
int front =-1,rear=-1,q[MAXSIZE];
void push();
void pop();
void display();
void main()
{
    int ch;
    do
    {
    printf("\n 1.insert \n 2.delete \n 3.Display \n 4.Exit \n");
    printf("enter the choice");
    scanf("%d",&ch);
    switch(ch)
    {

        case 1 : insert();
                 break;
        case 2 : deletion();
                 break;
        case 3 : display();
                 break;
        case 4: exit(0);
                break;
        default:printf("wrong choice");
    }
    }while(ch<4);


}
void insert()
{    int item;
    if(rear>=MAXSIZE-1)
    {

        printf("queue overflow");
        exit(0);

    }
    else
    {
        printf("enter the item=");
        scanf("%d",&item);
        rear=rear+1;
        q[rear]=item;
    if(front==-1)
        front++;
    }
}
void deletion()
{
int item;
if(front<0)
{
    printf("underflow");
    exit(0);

}
else
{
    item=q[front];
    if(front==rear)
        front=rear=-1;
    else
        front=front+1;
    printf("deleted item=%d",item);

}

}
void display()
{
    int i;
    if(front==-1)
    {
    printf("empty");
    exit(0);

    }
    else
    {

for(i=front;i<=rear;i++)
    printf("%d \t",q[i]);
    }
}
