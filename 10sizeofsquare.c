#include <stdio.h>
#include <stdlib.h>

int main()
{printf(" This the square of the  first 10 integers ");
    int i;
    int square;
    for( i=0;i<=10;i++)
    {
        square= i*i;
        printf("\n The square of %d=%d*%d=%d",i,i,i,square);
    }
    return 0;
}
