#include <stdio.h>
int main()
{
	int number;
	
	printf("���� �Է� : ");
	scanf("%d", &number);
	
	if(number % 2 == 0)
	{
		printf("¦��");
	}
	else
	{
		printf("Ȧ��");
	}
	
	return 0;
}
