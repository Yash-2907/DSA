//binary tree(INCOMPLETE)
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *left;
   struct node *right;
};
int flag=0;
void anode(struct node *ptr,int num)
{
   // if(ptr->left==NULL)
   // {
   //    ptr->left=(struct node *)malloc(sizeof(struct node));
   //    ptr->left->data=num;
   //    ptr->left->left=NULL;
   //    ptr->left->right=NULL;
   // }
   // else if(ptr->right==NULL)
   // {
   //    ptr->right=(struct node *)malloc(sizeof(struct node));
   //    ptr->right->data=num;
   //    ptr->right->left=NULL;
   //    ptr->right->right=NULL;
   // }
   // else{
   //  //   anode()
   // }
}

struct node *itr(struct node *ptr)
{
    int temp;
    struct node *now=ptr;
    there:
    printf("\nENTER 1 TO SEE LEFT OF NODE , 2 TO RIGHT OF NODE , 3 TO RESET , ANYTHING ELSE TO EXIT :-");
    scanf("%d",&temp);
    if(temp==1)
    {
         printf("DATA IS = %d",ptr->left->data);
         now=ptr->left;
         goto there;
    }
    else if(temp==2)
    {
        printf("DATA IS = %d",ptr->right->data);
         now=ptr->right;
         goto there;
    }
    else if(temp==3)
    {
        now=ptr;
        goto there;
    }
    else{
        printf("EXITEDDD !!!!");
    }
}
int main()
{
   struct node *root=(struct node *)malloc(sizeof(struct node));
   printf("enter the value of first element :- ");
   scanf("%d",&root->data);
   root->left=NULL;
   root->right=NULL;
   int temp; 
   here:
   printf("\nenter 1 to add element , 2 to iterate manually , anything else to exit :- \n");
   scanf("%d",&temp);
   if(temp==1)
   {
      int num;
      printf("ENTER THE NUMBER TO ADD :- ");
      scanf("%d",&num);
      anode(root,num);
   }
   else if(temp==2)
   {
      printf("CURRENT NODE IS :- %d",root->data);
      itr(root);
   }
   else{
      exit(0);
   }
   goto here;
   return 0;
}