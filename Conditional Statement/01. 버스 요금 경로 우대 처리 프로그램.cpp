#include <stdio.h>
int main()
{
 //���̸� �Է¹޾Ƽ� �⺻ ����� 2,000�������� ��� ��� �����(65�� �̻�)�̸� ���� ó��	
	int age;
	int fee = 2000;
	
	printf("���� �Է� : ");
	scanf("%d", &age);
	
	if(age >= 65)
	{
		fee = 0;
	}
	
	printf("���� : %d\n", age);
	printf("��� : %d\n", fee);
	 
	
	return 0;
}
