#include <stdio.h>
int main()
{
	int korean[5];	//�迭 ���� 
	int rank[5]={1,1,1,1,1};	//��� �л��� ������ 1�� �ʱ�ȭ 
	int sum = 0;
	float avg = 0;
	
	for(int index = 0; index < 5; index++)
	{
		printf("[%d] �л��� ���� ���� : ", index+1);
		scanf("%d", &korean[index]);
		
		
		
		sum = sum + korean[index];
	}
	
	avg = (float) sum / 5;		// ����� �Ǽ��� ��� 
	
	for(int index = 0; index < 5; index++)			// ������ ���� ������ ������ rank +1 
	{
		for(int index2 = 0; index2 < 5; index2++)
		{
			if(korean[index] < korean[index2])
			{
				rank[index]++;		//rank[index] = rank[index]+1 
			}
		}
	}
	
	printf("\n��ȣ\t����\t���\n");
	printf("--------------------------------------------\n");
	for(int index = 0; index < 5; index++)
	{
		printf("%d\t%d\t%d\n\n", index+1, korean[index], rank[index]);
	}
	
	printf("�հ� :%d\n", sum);
	printf("��� :%.2f\n", avg);
	
	return 0;
 } 
