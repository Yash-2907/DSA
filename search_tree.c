#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int data;
    struct tree *right;
    struct tree *left;
};
void add(struct tree *ptr)
{
  int temp;
  printf("ENTER THE NUMBER TO ADD TO THE TREE :- ");
  scanf("%d",&temp);
  struct tree *current=ptr;
  back:
  if(current->data>temp)
  {
    if(current->left==NULL)
    {
        current->left=(struct tree *)malloc(sizeof(struct tree));
        current->left->data=temp;
        current->left->left=NULL;
        current->left->right=NULL;
        printf("%d added !!!\n",temp);
    }
    else{
        current=current->left;
        goto back;
    }
  }
  else{
    if(current->right==NULL)
    {
        current->right=(struct tree *)malloc(sizeof(struct tree));
        current->right->data=temp;
        current->right->left=NULL;
        current->right->right=NULL;
        printf("%d added !!!\n",temp);
    }
    else{
        current=current->right;
        goto back;
    }
  }
}
void del(struct tree *ptr)
{

}
void src(struct tree *ptr)
{

}
struct tree itr(struct tree *ptr)
{
    printf("CURRENT ELEMENT IS :- %d",ptr->data);
    struct tree *curr=ptr;
    int temp;
    ith:
    printf("\nENTER 1 TO ITERATE LEFT , 2 TO ITERATE RIGHT , 3 TO RESET TO ROOT , ANYTHING ELSE TO EXIT :- ");
    scanf("%d",&temp);
    if(temp==1)
    {
        if(curr->left==NULL)
        {
            printf("NO ELEMENT");
        }
        else{
            printf("CURRENT ELEMENT IS :- %d",curr->left->data);
            curr=curr->left;
        }  
        goto ith;
    }
    else if(temp==2)
    {
        if(curr->right==NULL)
        {
            printf("NO ELEMENT");
        }
        else{
            printf("CURRENT ELEMENT IS :- %d",curr->right->data);
            curr=curr->right;
        } 
        goto ith;
    }
    else if(temp==3)
    {
        curr=ptr;
        goto ith;
    }
    else{
       
    }
}
void main()
{
   struct tree *root=(struct tree *)malloc(sizeof(struct tree));
   struct tree *current=root;
   printf("ENTER THE ROOT TO ADD IN TREE :- ");
   scanf("%d",&root->data);
   root->left=NULL;
   root->right=NULL;
   here:
   printf("ENTER 1 TO ADD ELEMENT , 2 TO DELETE ELEMENT , 3 TO SEARCH ELEMENT ,4 TO ITERATE , ANYTHING ELSE TO EXIT :- ");
   int temp;
   scanf("%d",&temp);
   if(temp==1)
   {
    add(root);
   }
   else if(temp==2)
   {
    del(root);
   }
   else if(temp==3)
   {
    src(root);
   }
   else if(temp==4)
   {
    itr(current);
   }
   else{
    printf("EXITEDDDDD !!!!!!!!!!!!!!!!!!");
    exit(0);
   }
   goto here;
}