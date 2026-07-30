#include <stdio.h>
int main()
{   
	int num;
	printf("input an integer. :");
	scanf("%d", &num);

	if(num > 0)

    {

        printf("The absolute value is %d", num);

    }

    else if(num < 0)

    {

        printf("The absolute value is %d", -num);

    }

    else

    {

        printf("The absolute value is zero.");

    }
    return 0;
}