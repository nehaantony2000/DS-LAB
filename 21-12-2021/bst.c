#include<stdio.h>
#include<stdlib.h>
struct bst
{
    int data;
    struct bst *left;
    struct bst *right;

};
typedef struct bst binary;
binary *root=NULL;

binary *deletion(binary *,int);
binary *insertion(int, binary *);
void search(int,binary *);
 void main()
{
    binary *ptr;
    binary *insert, *del;
int ch,item;

do
{
    printf("Menu DRIVEN \n 1.insertion \n 2.deletion \n 3.search\n 4.exit ");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {

        case 1:printf("enter the item to be inserted");
               scanf("%d",&item);
               insert=insertion(item,ptr);
               printf("inserted item=%d",ptr->data);
                break;
        case 2 :
              printf("enter the item to be deleted");
               scanf("%d",&item);
                del=deletion(ptr,item);
               break;
               printf("enter the item to be searched");
               scanf("%d",&item);
        case 3:search(item, ptr);
                break;
        case 4:exit(0);
                break;
        default:printf("wrong choice");

    }
}while(ch<4);
}
void preorder(binary *ptr)
{
  if(ptr!=NULL)
  {
     printf("%d",ptr->data);
     preorder(ptr->left);
     preorder(ptr->right);

  }

}
void postorder(binary *ptr)
{
  if(ptr!=NULL)
  {

     preorder(ptr->left);
     preorder(ptr->right);
     printf("%d",ptr->data);

  }

}
void inorder(binary *ptr)
{
  if(ptr!=NULL)
  {

     preorder(ptr->left);
     printf("%d",ptr->data);
     preorder(ptr->right);

  }
  }

  void search(int item ,binary *ptr)
  {

      if(ptr==NULL)
        printf("search unsuccessful");
      else if(item<ptr->left)
          search(item,ptr->left);
      else if(item>ptr->right)
          search(item,ptr->right);
      else
         printf("element found");
  }

  binary *insertion(int item, binary *ptr)
  {

      if(ptr==NULL)
      {
          ptr->data=item;
          ptr->left=NULL;
          ptr->right=NULL;

      }
      else if(item<ptr->data)
         insertion(item,ptr->left);
      else
        insertion(item,ptr->right);

  }

  binary *deletion(binary *root,int x)
  {
      binary *temp;
      if(root==NULL)
           return NULL;
      else if(x>root->data)
        root->right=deletion(root->right,x);
      else
        root->left=deletion(root->left,x);

          //no children
          if(root->left==NULL && root->right==NULL)
          {
              free(root);
              return NULL;

          }
          else if(root->left==NULL ||root->right==NULL)
          {

              if(root->left==NULL)
              temp=root->right;
              else
                temp=root->left;
              free(root);
              return temp;


          }
            else
            {

             //binary *temp=find_min(root->right);
            root->data=temp->data;
            root->right=deletion(root->right,temp->data);

            }
      }
