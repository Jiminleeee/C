#include <stdio.h>
int main()
{
// do ~ while ����ؼ� �ڿ��� 1 ~ 10������ ���� ���Ѵ� 
	int index = 1;
	int sum = 0;
	
	do
	{
		sum = sum + index;
		index++;
	} while(index <= 10);
	
	printf("�հ� : %d\n", sum);	
	
	return 0;
} 
