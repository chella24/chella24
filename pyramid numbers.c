#include <stdio.h>
#include <stdlib.h>

int main()
{ int rows,num,space,column,count=1;
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    for(num =1;num<=rows;num++)
    {
        for(space=-15; space<=rows-num;  space ++)
        {
            printf(" ");

        }
        for(column=1; column<=num;column++)
        {
            printf(" %d ", count ++ );
        }
        printf("\n");
    }
    return 0;
}
