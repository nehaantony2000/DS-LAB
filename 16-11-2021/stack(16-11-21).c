#include<stdio.h>
#include<process.h>
#include<stdio.h>
#define MAXSIZE 5
int top=-1,stack[MAXSIZE];
void push();
void pop();
void display();
void main()
{
    int ch;
    do
    {
    printf("\n 1.PUSH \n 2.POP \n 3.Display \n 4.Exit \n");
    printf("enter the choice");
    scanf("%d",&ch);
    switch(ch)
    {

        case 1 : push();
                 break;
        case 2 : pop();
                 break;
        case 3 : display();
                 break;
        case 4: exit(0);
                break;
        default:printf("wrong choice");
    }
    }while(ch<4);


}
void push()
{    int item;
    if(top==MAXSIZE-1)
    {

        printf("stack overflow");
        exit(0);

    }
    else
    {

        top=top+1;
        printf("enter the item=");
        scanf("%d",&item);
        stack[top]=item;
    }
}
void pop()
{
int item;
if(top<0)
{
    printf("underflow");
    exit(0);

}
else
{
    item=stack[top];
    top=top-1;
    printf("deleted item=%d",item);

}

}
void display()
{
    int i;
    if(top==-1)
    {
    printf("empty");
    exit(0);

    }
    else
    {

for(i=top;i>=0;i--)
    printf("%d \t",stack[i]);
    }
}
