#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
};
void ini(struct node *ptr)
{
  int temp;
   printf("ENTER THE NUMBER TO BE ADDED TO FIRST NODE :- ");
   scanf("%d",&temp);
   ptr->data=temp;
   ptr->prev=NULL;
   ptr->next=NULL;
}
struct node * anode(struct node *current,struct node *start,int temp)
{
  if(temp==1)
  { 
    current->next=(struct node *)malloc(sizeof(struct node));
    printf("ENTER THE DATA TO ADD TO NODE :- ");
    scanf("%d",&temp);
    current->next->data=temp;
    current->next->next=NULL;
    current->next->prev=current;
    return current->next;
  }
  else
  {
     struct node *head=(struct node *)malloc(sizeof(struct node));
     printf("ENTER THE DATA TO ADD TO FRONT NODE :- ");
     scanf("%d",&temp);
     head->data=temp;
     head->prev=NULL;
     head->next=start;
     return head;
  }
}
struct node * dnode(struct node *current,struct node *start,int temp)
{
  if(temp==1)
  {
    while(current->next!=NULL)
    {
      current=current->next;
    }
    current->prev->next=NULL;
    return current->prev;
  }
  else{
    start->next->prev=NULL;
    return start->next;
  }
}
void itr(struct node *start)
{
   struct node *current=start;
   printf("CURRENT LINKED LIST IS :- ");
   while(current->next!=NULL)
   {
    printf("%d ",current->data);
    current=current->next;
   }
   printf("%d",current->data);
   printf("\nREVERSED ITERATION IS :- ");
   while(current->prev!=NULL)
   {
    printf("%d ",current->data);
    current=current->prev;
   }
   printf("%d \n",current->data);
}
void main()
{
  struct node *start=(struct node *)malloc(sizeof(struct node));
  struct node *current=start;
  ini(start);
  int temp,tmp;
  here:
  printf("ENTER 1 TO ADD NODE , 2 TO ITERATE , 3 TO DELETE NODE , ANYTHING ELSE TO EXIT :- ");
  scanf("%d",&temp);
  if(temp==1)
  {
    printf("ENTER 1 TO ADD NODE AT END , 2 TO ADD AT FRONT ");
    scanf("%d",&tmp);
    if(tmp==1)
    {
    current=anode(current,start,1);
    }
    else if(tmp==2){
      start=anode(current,start,2);
    }
    else{
      printf("INVALID INPUT");
    }
  }
  else if(temp==2)
  {
     itr(start);
  }
  else if(temp==3)
  {
    printf("ENTER 1 TO DELETE FROM END, 2 TO DELETE FROM THE FRONT :- ");
    scanf("%d",&tmp);
    if(tmp==1)
    {
     current=dnode(current,start,1);
    }
    else if(tmp==2)
    {
      start=dnode(current,start,2);
    }
    else{
      printf("INVALID INPUT");
    }
  }
  else{
    exit(0);
  }
  goto here;
}
