#include <stdio.h>
int main()
{
	int myBirth, myYear, myMonthDay;
	int koreanAge, americanAge;
	
	printf("�ֹι�ȣ ���ڸ� �Է�: ");
	scanf("%d", &myBirth);
	
	myYear = myBirth / 10000;		// 10000���� ������ ������ ���´� ex) 940907 > 94
	myMonthDay = myBirth % 10000;		// ���� ���� ������ 10000���� ���� �������� ������ ��, ���� ���´� ex) 940907 > 0907	
	
	//2000����� �������� �ٸ��� �����ؾ� �Ѵ�
	//2022��(����) �����̹Ƿ� ������ 22���� ������ 2000�������� �����Ѵ�
	
	if(myYear > 22)
	{
		koreanAge = 2022 - (1900 + myYear) + 1;
	} 
	else {
		koreanAge = 2022 - (2000 + myYear) + 1;
	}
	
	//����(3�� 15��) �������� ������ ������ �� ���� +1  > 0315���� �۰ų� ������  �� ���� +1
	//�� ���� ��� : ������ �������� (-1), �� �������� (-2)
	 
	if(myMonthDay <= 0315) 
	{
		americanAge = koreanAge - 1;
	}
	else 
	{
		americanAge = koreanAge - 2;
	} 
	
	printf("���� (2022�� 3�� 15��)���� ���̴� %d��, �� ���̴� %d�� �Դϴ�.\n", koreanAge, americanAge);
	
	return 0;
} 
