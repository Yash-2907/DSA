#include<stdio.h>
#include<stdlib.h>
int flag=0;
int search(int *arr,int num,int s,int e)
{
    int current=(s+e)/2;
    if(arr[current]==num)
    {
        flag=1;
        return current;
    }
    else if(e-s<=1){
        printf("NUMBER NOT FOUND !!!!");
        return 0;
    }
    else{
        if(arr[current]<num)
        {
            search(arr,num,current,e);
        }
        else if(arr[current]>num){
             search(arr,num,s,current);
        }
    }
}
int main()
{
    int i,size,num,temp=0;
    printf("ENTER THE SIZE OF ARRAY :- ");
    scanf("%d",&size);
    int s=0,e=size-1;
    int *arr=(int*)malloc(sizeof(int)*size);
    printf("ENTER THE ELEMENTS OF ARRAY :-");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE ELEMENT YOU WANT TO FIND :- ");
    scanf("%d",&num);
    if(arr[size-1]<num)
    {
        printf("NUMBER NOT FOUND!!!");
    }
    else{
    temp=search(arr,num,s,e);
    }
    if(flag==1)
    {
        printf("NUMBER FOUND AT POSITION %d",temp+1);
    }
    return 0;
}