#include <stdio.h>
int main()
{
	int inputYear, isLeapYear;
	
	printf("���ϴ� ������ �Է��ϼ��� : ");
	scanf("%d", &inputYear);
	printf("%d���� ������ �����ϴ�\n", inputYear);
	 
	if(((inputYear%4 == 0) && (inputYear%100 !=0)) || (inputYear%400 ==0))
	{
		isLeapYear = 1; 
	 } 
	
	printf("1�� : 31��\n");
	
	switch(isLeapYear)
	{
		case 0 : 
			printf("2�� : 28��\n");
			break;
		case 1 :
			printf("2�� : 29��\n");
			break; 
	}
	
	printf("3�� : 31��\n");
	printf("4�� : 30��\n");
	printf("5�� : 31��\n");
	printf("6�� : 30��\n");
	printf("7�� : 31��\n");
	printf("8�� : 31��\n");
	printf("9�� : 30��\n");
	printf("10�� : 31��\n");
	printf("11�� : 30��\n");
	printf("12�� : 31��\n");
	
	return 0;
 } 
