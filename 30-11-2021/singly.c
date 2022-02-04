#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *next;
void traversal();
void display();
void insert();
void delet();
int choice,a;
void beg()
{

            int value;
            printf("\n enter the value\n");
            scanf("%d",&value);
            struct node *newNode;
            newNode = (struct node*)malloc(sizeof(struct node));
            newNode->data = value;
            newNode->next = head;
            head = newNode;
            printf("\n value inserted\n");

}
void end()
{
            int value;
            printf("\n enter the value\n");
            scanf("%d",&value);
            struct node *newNode;
            newNode = (struct node* )malloc(sizeof(struct node));
            newNode->data = value;
            newNode->next = NULL;

            struct node *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
             temp->next = newNode;
}
void pos()
{



            int value;
            printf("\n enter the value\n");
            scanf("%d",&value);
            struct node *newNode;
            newNode = (struct node * )malloc(sizeof(struct node));
            newNode->data = value;
            int position;

            struct node *temp = head;
            printf("\n enter the posiotion\n");
            scanf("%d",&position);

            for(int i=2; i < position; i++) {
                if(temp->next != NULL) {
                    temp = temp->next;

                }
            }
            newNode->next = temp->next;
            temp->next = newNode;
            printf("\n value inserted\n");

}
void delbeg()
{
    head = head->next;
    printf("\n node deleted\n");

}
void delend()
{
    struct node* temp = head;
    while(temp->next->next!=NULL){
    temp = temp->next;
        }
   temp->next = NULL;
   printf("\n deleted sucessfully\n");

}
void delpos()
{
    int position;
    struct node* temp = head;
     printf("\n enter the posiotion\n");
            scanf("%d",&position);
    for(int i=2; i< position; i++) {
  if(temp->next!=NULL) {
    temp = temp->next;
  }
}

temp->next = temp->next->next;

}

void main()
          {

while(1)
{


              printf("\n choose an operation from below\n\t1.display\n\t2.insertion\n\t3.deletion\n\t4.exit\n\t5.traversal\n");
              scanf("%d",&choice);


                switch(choice)
              {
                  case 1: traversal();
                            break;
                  case 2: insert();
                            break;
                  case 3: delet();
                            break;
                  case 4: exit(0);

                  default: printf("\nwrong input\n");
              }

          }
          }
    void traversal()
    {

            struct node *temp = head;
            printf("\n\nList elements are - \n");
            while(temp != NULL) {
            printf("%d --->",temp->data);
            temp = temp->next;
    }
    }
    void insert()
    {
        //int d;
        printf("choose one\n\t1.at beg\n\t2.at end\n\t3.at posiotion\n");
        scanf("%d",&a);

        switch(a)
        {

        case 1:beg();
        break;
        case 2:end();
        break;
        case 3:pos();
            break;
        default: printf("wrong\n");
        }
    }
    void delet()
    {
         printf("choose one\ndeletion\n\t1.at beg\n\t2.at end\n\t3.at posiotion\n");
        scanf("%d",&a);

        switch(a)
        {

        case 1:delbeg();
        break;
        case 2:delend();
        break;
        case 3:delpos();
            break;
        default: printf("wrong\n");
        }
    }

