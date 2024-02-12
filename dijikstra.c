#include<stdio.h>
#include<stdlib.h>
int shortest=0;
int main()
{
    int num,i,j,k;
    printf("ENTER NUMBER OF NODES :- ");
    scanf("%d",&num);
    int arr[num][num];
    printf("ENTER THE VALUES OF CONNECTION :- \n");
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if(i==j)
            {
                arr[i][j]=0;
            }
            else{
                printf("%d ------>  %d :- ",i,j);
                scanf("%d",&arr[i][j]);
            }
        }
    }
    int start,end;
    printf("ENTER THE START POINT :- ");
    scanf("%d",&start);
    printf("ENTER THE END POINT :- ");
    scanf("%d",&end);

    return 0;
}