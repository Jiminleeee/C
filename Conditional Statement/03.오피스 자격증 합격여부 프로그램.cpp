#include <stdio.h>
int main()
{ 
// �� ���� ����� 60�� �̻��̸� �հ�, �ƴϸ� ���հ�
 
	int excel, powerpoint, word;
	int sum;
	float avg;			// ��� �Ǽ��� ���� 
	
	printf("����, �Ŀ�����Ʈ, ���� : ");
	scanf("%d %d %d", &excel, &powerpoint, &word);
	
	sum = excel + powerpoint + word;
	avg = sum / (float)3;
	
	printf("�հ� : %d\n", sum);
	printf("��� : %.2f\n", avg);		// �Ǽ��� �Ҽ��� �� �ڸ����� ��� 
	 
	if(avg >= 60)
	{
		printf("�հ�");
	}
	else
	{
		printf("���հ�");
	}
	
	return 0;
}
