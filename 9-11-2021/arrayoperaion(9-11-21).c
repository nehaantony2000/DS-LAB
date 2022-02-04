#include<stdio.h>
#include<stdlib.h>

void insertend(int a[10],int n);
void insertspe(int a[10],int n);

void delend(int a[10],int n);
void delspe(int a[10],int n);
void traversal(int a[10],int n);
void search(int a[10],int n);
void main()
{
    int n,a[10],i,ch;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    do
    {
    printf("\n THE MAIN MENU ");
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n  1.Insertion at the end \n 2.Insertion at required position  \n 3.Deletion at the end \n 4.Deleion at the required position \n 5. Search \n 6.Traversal \n .Exit \n");
    printf("Enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {

        case 1 : insertend(a,n);
                break;
        case 2 : insertspe(a,n);
                  break;
        case 3 : delend(a,n);
                  break;
        case 4 :  delspe(a,n);
                  break;
        case 5:   search(a,n);
                  break;
        case 6 : traversal(a,n);
                  break;
        case 7:  exit(0);
                  break;
        default: printf("wrong choice");

    }
}while(ch< 9);
}
void search(int a[10],int n)
{
 int item,loc=-1,i;
 printf("enter the the item to be searched=");
 scanf("%d",&item);

     for(i=0;i<item;i++)
     {
         if(a[i]==item)
         {
             loc=i+1;
             break;

         }
     }
      if(loc>=0)
          printf("%d is found at %d ",item,i);


      else
        printf("item is not found");

     }
void delend(int a[10],int n)
{
    int i,loc;
    loc--;
    for(i=loc;i<n;i++)
    {


        if(i>=loc)
        a[i]=a[i+1];
    }
    n--;
    traversal(a,n);
}
void traversal(int a[10],int n)
{
    int i;
    printf("the array is =\n");
    for(i=0;i<n;i++)
        printf("%d \n",a[i]);
}
void delspe(int a[10],int n)
{
    int loc,i;
    printf("enter the position of the item to be deleted");
    scanf("%d",&loc);

    for(i=loc;i<n;i++)
    {
        loc--;
        if(i>loc)
        {
            a[i]=a[i+1];

        }
    }
    n=n-1;
     traversal(a,n);


}void insertend(int a[10],int n)
{
    int item;
    printf("enter the item to be inserted=");
    scanf("%d",&item);
    a[n]=item;
    n=n+1;
    traversal(a,n);
}
void insertspe(int a[10],int n)
{
    int i,item,loc;
    printf("enter the item to be inserted");
    scanf("%d",&item);
    printf("enter the position");
    scanf("%d",&loc);
    loc--;
    for(i=n-1;i>=loc;i--)
    {
        a[i+1]=a[i];
    }
        a[loc]=item;
        n=n+1;
    printf("the new array=");
    for(i=0;i<n;i++)
        printf("%d \n ",a[i]);

}
