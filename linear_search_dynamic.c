#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i,size;
   int num;
   printf("ENTER THE SIZE OF ARRAY :- ");
   scanf("%d",&size);
   int *head=(int*)malloc(sizeof(int)*size);
   printf("ENTER THE ELEMENTS OF ARRAY :- ");
   for(i=0;i<size;i++)
   {
      scanf("%d",&head[i]);
   }
   printf("ENTER THE NUMBER YOU WANT TO FIND :- ");
   scanf("%d",&num);

   for(i=0;i<size;i++)
   {
      if(head[i]==num)
      {
        break;
      }
   }
   if(i==size)
   {
    printf("ELEMENT NOT FOUND!!!!");
   }
   else
   {
    printf("ELEMENT FOUND AT POSITION %d",i+1);
   }
   return 0;
}