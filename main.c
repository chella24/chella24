#include <stdio.h>
#include <stdlib.h>



  void FibonacciNumbers(int v)
{
	int c1 = 0, c2 = 1, a;

	if (v < 1)
		return;

	printf("\n%d ", c1);
	for (a = 1; a < v; a++) {
		printf("\n%d ", c2);
		int next = c1 + c2;
		c1 = c2;
		c2 = next;
	}
}
int main()
{
	FibonacciNumbers(20);
	printf("\n\n");
	return 0;
}
