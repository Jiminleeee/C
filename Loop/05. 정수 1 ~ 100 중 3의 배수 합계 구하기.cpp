#include <stdio.h>
int main()
{
	int sum = 0;
	int index;
	
	for(index = 1; index <= 100; index++)
	{
		if(index % 3 == 0)	//3�� ���  
		{
			printf("%d ", index);
			sum = sum + index;
		}
	}
	
	printf("\n1 ~ 100�� ���� �� 3�� ����� �� : %d\n", sum);
	
	return 0;
}
