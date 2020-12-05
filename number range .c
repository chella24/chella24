#include <stdio.h>
#include <stdlib.h>

int main()
{ int num,sum;
    printf(" Enter range number:");
    scanf("%d",&num);

    int i;

     for(i=1; i<=num; i++)
    {

        if((i%3)==0)
        {
            continue;
        }

        printf("%d\n",i);
        sum +=i;
    }

    printf("\n\n Total Count:%d",sum);
    return 0;
}
