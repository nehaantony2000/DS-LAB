#include<stdio.h>
#include<stdlib.h>
    int arr[100];
    int arr2[100];
    int arr3[100];
    int lim1;
    int lim2;
    //int arr4[100];
    int choice;
    int union1();
    void inter();
    void diff();
void main()
{

    printf("Enter the limit of first set\n");
    scanf("%d",&lim1);
    printf("Enter the limit  of second set\n");
    scanf("%d",&lim2);
    printf("Enter the elements of first set\n");
    if(lim1==lim2)
        {
    for(int i=0;i<lim1;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the second set elements\n");
    for(int i=0;i<lim2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    while(1)
    {
        printf("\n1.union \n2.intersection \n3.difference \n4.EXIT");
        printf("\nEnter your choice\n");


        scanf("%d",&choice);
        switch(choice)
        {



       case 1:printf("\nthe union of the set is\n");
              union1(arr,arr2,lim1);
               break;
       case 2:printf("\nThe intersection of the set is\n");
              inter();
              break;
       case 3:  printf("\nThe difference is \n");
               diff(arr,arr2,lim1);
               break;
       case 4:exit(0);

       default: printf("/n wrong input\n");
        }
    }

}
else
{
    printf("/nboth limits are not same");
}

}

int union1(int arr[],int arr2[],int lim1)
{
    for(int i=0;i<lim1;i++){
        arr3[i]=arr[i]||arr2[i];
        printf("%d ",arr3[i]);}
}
 void inter()
 {

     for(int i=0;i<lim1;i++)
     {
         if(arr[i]==1&&arr2[i]==1)
         {
             arr3[i]=1;
         }
         else{
            arr3[i]=0;
         }
     }
for(int i=0;i<lim1;i++)
    {
        printf("\n%d",arr3[i]);
    }
 }
 void diff(int arr[],int arr2[],int lim1)
 {
 for(int i=0;i<lim1;i++){
        arr3[i]=!arr[i]&&arr2[i];
        printf("%d ",arr3[i]);}

 }
