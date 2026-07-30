#include <stdio.h>
int main()
{   
	int answer = 35;
	int guess;
	int count=0;
	
	do{
		printf("guess a number: ");
		scanf("%d", &guess);
		
		count++;
		
		if (guess < answer){
			printf("high!\n");
			
		}else if (guess > answer){
			printf("low!\n");
			
		}
	} while (guess != answer);
	
	printf("congratulation! trial: %d", count);
	
	return 0;
	
}