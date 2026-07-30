#include <stdio.h>
int main()
{   
	int a, b;
	int c;
	
	printf("enter the calculation :");
	scanf("%d %c %d", &a, &c, &b);
	
	switch (c) {
        case '+':
            printf("%d %c %d = %d\n", a, c, b, a + b);
            break;
        case '-':
            printf("%d %c %d = %d\n", a, c, b, a - b);
            break;
        case '*':
            printf("%d %c %d = %d\n", a, c, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d %c %d = %d\n", a, c, b, a/b);
            } else {
                printf("error.\n");
            }
            break;
        case '%' :
        	if (b !=0) {
        		printf("%d %c %d", a, c, b, a%b);
			} else { printf("error.");
			}
			break;
		default:
			printf("error.\n");
			break;
}
	return 0;
	
}