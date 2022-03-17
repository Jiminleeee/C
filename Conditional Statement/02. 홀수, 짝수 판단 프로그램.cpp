#include <stdio.h>
int main()
{
	int number;
	
	printf("Á¤¼ö ÀÔ·Â : ");
	scanf("%d", &number);
	
	if(number % 2 == 0)
	{
		printf("Â¦¼ö");
	}
	else
	{
		printf("È¦¼ö");
	}
	
	return 0;
}
