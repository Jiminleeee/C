#include <stdio.h>
int main()
{
	int korean[5]={0};	//�迭 ���� 
	int sum = 0;
	float avg = 0;
	
	for(int index = 0; index < 5; index++)
	{
		printf("[%d] �л��� ���� ���� : ", index+1);
		scanf("%d", &korean[index]);
		
		sum = sum + korean[index];
	}
	
	avg = (float) sum / 5;		// ����� �Ǽ��� ��� 
	
	printf("�հ� :%d\n", sum);
	printf("��� :%.2f\n", avg);
	
	return 0;
 } 
