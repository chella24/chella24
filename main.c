#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define SIZE 6
void SEEKmean();
void findMedian();
void getMin();
void getMax();

int main(void){
     int choices;
     float y,n;
     char Over;

    do
    {

    do
    {
     printf("\n[0]-Exit\n[1]-Mean\n[2]-Median\n[3]-Min \n[4]-Max");
     printf("\n");
     printf("\n Select Function:");
     scanf("%d",&choices);

     switch (choices){

    case 0: printf("Program Terminated.");
    break;
     case 1: printf("\n");
            SEEKmean();
     break;
     case 2: printf("\n");
            findMedian();
     break;
     case 3: printf("\n:");
            getMax();
     break;
     case 4: printf("\n");
            getMin();
     break;
     default:
        printf("Incorrect Entry.");

        }
    }while (choices == 0 || choices > 5);

    printf("\nTRY AGAIN(y/n):");
    scanf("%c",&Over);
    scanf("%c",&Over);
    system("cls");
    if (Over == 'n' )
    {
    printf("Program bailout.");
    printf("\nWRITTEN BY: \n MISS. CHELLA JANE CABIGQUEZ");
    }

}while(Over == 'y');

      return 0;
}

void SEEKmean()
{     int sum,c;
     float average;
     int arr[6];
     int input;
     int Mean=arr[0];

   for (c=1;c<6;c++)
    {
        printf("[%d]Input Number:",c);
        scanf("%d",&arr[c]);
        if (arr[c]<= -1)
        {
            printf("[%d]Input Number:",c);
            scanf("%d",&arr[c]);
        }
        sum+=arr[c];


    }
    int length=sizeof(arr)/sizeof(arr[0]);
     printf("\n\nInput:");
    for (int input=1; input<length;input++){
        printf("%d ", arr[input]);}

    average = sum/(float)5;
    printf("\n\nMean = %f", average);



}

void getMin()
{
    int arr[6];
    int Min=arr[0];
    int c;

    for (c=1; c<6; c++)
    {
        printf("[%d]Input Number:",c);
        scanf("%d",&arr[c]);
        if (arr[c]<= -1)
        {
            printf("[%d]Input Number:",c);
            scanf("%d",&arr[c]);
        }
        if ( Min>arr[c] )
             Min=arr[c];
    }
    int length=sizeof(arr)/sizeof(arr[0]);
       printf("\n\nInput:");
    for (int input=1; input<length;input++){
        printf("%d ", arr[input]);}



    printf("\n\nMinimum:%d",Min);
}


void getMax()
{
     int arr[6];
     int Max = arr[0];
     int c;

    for (c=1; c<6; c++)
    {
        printf("[%d]Input Number:",c);
        scanf("%d",&arr[c]);
        if (arr[c]<= -1)
        {
            printf("[%d]Input Number:",c);
            scanf("%d",&arr[c]);
        }

       if (Max<arr[c])
           Max=arr[c];

    }
     int length=sizeof(arr)/sizeof(arr[0]);
       printf("\n\nInput:");
    for (int input=1; input<length;input++){
        printf("%d ", arr[input]);}

    printf("\n\nMaximum:%d",Max);
}
void findMedian()
{   int temp;
    int arr[6];
     float median = arr[0];
     int c,f;
     int n=5;

    for (c=1; c<6; c++)
    {
        printf("[%d]Input Number:",c);
        scanf("%d",&arr[c]);
        if (arr[c]<= -1)
        {
            printf("[%d]Input Number:",c);
            scanf("%d",&arr[c]);
        }
    }
    int length=sizeof(arr)/sizeof(arr[0]);
       printf("\n\nInput:");
    for (int input=1; input<length;input++){
        printf("%d ", arr[input]);}

    for(c=1; c<6-1; c++)
    {
        for(f=1; f<6-1; f++)
        {
           if(arr[f]>arr[f+1])
           {
           	temp    = arr[f];
           	arr[f]  = arr[f+1];
           	arr[f+1]= temp;
		   }

        }

    }
    printf("\nAscending order:");

    for(c=1; c<6; c++)
    {
       printf("%d ",arr[c]);
    }

    n = (n+1) / 2 - 1;
    printf("\nMedian = %d ", arr[n]);
}




