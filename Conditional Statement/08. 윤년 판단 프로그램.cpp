#include <stdio.h>
int main()
{
	int inputYear, isLeapYear;
	
	printf("���ϴ� �⵵�� �Է��ϼ��� : ");
	scanf("%d", &inputYear);
	
	/*
	������ ����( �� ���� �� �ϳ��� �����ϸ� ��) 
	 - year�� 4�� ������ ��������, 100���δ� ������ �������� ����
	 - year�� 400���� ������ ������ 
	*/
	
	if(((inputYear%4 == 0) && (inputYear%100 !=0)) || (inputYear%400 ==0))
	{
		isLeapYear = 1; 
	 } 
	switch(isLeapYear)
	{
		case 0 : 
			printf("������ �ƴմϴ�.");
			break;
		case 1 :
			printf("�����Դϴ�.");
			break; 
	}
	
	return 0;
 } 
