#include <stdio.h>
int main()
{
// 2���� ������ �Է� �޾� ������ ���� ���� / ���� ���� ���ϴ� ���� ��� 
	int index = 0;
	int end;	// ������ ���� ���� ���� 
	int sum = 0;
	
	printf("2���� ���� �Է� : ");
	scanf("%d %d", &index, &end);
	
	while(index <= end)
	{ // ���ǽ� �������̸� = , �׷��� ������ + ��� 
		if(index != end)
		{
			printf("%d + ", index);
		}
		else
		{
			printf("%d = ", index);		
		}
		sum = sum + index;
		index++;	
	}
	
	printf("%d\n", sum);
	
	
	return 0;
} 
