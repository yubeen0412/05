#include <stdio.h>
int main()
{   
	int c;
	int sum = 0;
	
	printf("input a number :");
	scanf("%d", &c);
	int i;
	for (i=0; i<=c; i++)
		sum=sum+i;

	printf("the result is : %d\n", sum);
	
	return 0;
}