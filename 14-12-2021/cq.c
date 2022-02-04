#include<stdlib.h>
#include<stdio.h>
#define MAXSIZE 5
int front =-1,rear=-1,q[MAXSIZE];
void enqueue();
void dequeue();
void display();
void  main()
{
    int ch;
    do
    {
    printf("\n 1.insert \n 2.delete \n 3.Search \n 4.Display \n 5.Exit \n");
    printf("enter the choice");
    scanf("%d",&ch);
    switch(ch)
    {

        case 1 : enqueue();
                 break;
        case 2 : dequeue();
                 break;
        case 3:search();
               break;
        case 4 : display();
                 break;
        case 5: exit(0);
                break;

        default:printf("wrong choice");
    }
    }while(ch<4);


}
void enqueue()
{
    int item;
    if(front==(rear+1)% MAXSIZE)
    {

        printf("queue overflow");
        exit(0);

    }
    else
    {
        printf("enter the item=");
        scanf("%d",&item);
        if(front==-1)
            front=rear=0;
        else
        rear=(rear+1)% MAXSIZE;
        q[rear]=item;


}
}
void dequeue()
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
        front=(front+1)%MAXSIZE;
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
    if(front>rear)
    {
    for(i=front;i<MAXSIZE;i++)
    printf("%d \t",q[i]);
    for(i=0;i<=rear;i++)
    printf("%d \t",q[i]);
    }
    }

}
void search()
{

    if(front==-1)
		printf("\nCircular Queue is Empty !");
	else
	{
	    int item,flag;
	    printf("\n enter the element to be searched\n");
	    scanf("%d",&item);

	for (int i=0;i<rear;i++)
    {
        for(int j=front;j<rear;j++)
        {
            if(q[j]==item)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
    }
    if(flag==1)
        {
            printf("\n item found\n");

        }
        else
        {
            printf("\n item not  found\n");
        }

	}
}
