#include <stdio.h>
int main()
{
	int numArr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};		//ũ�Ⱑ 10�� int�� �迭 
	
	for(int index = 0; index <= 9; index++)			// �迭�� ��� ������ŭ �ݺ� 
	{	
		numArr[index] *= 2;							// �迭�� ��Ҹ� 2��� ����� 
	}
	
	for(int index = 0; index <= 9; index++)			// �迭�� ��� ������ŭ �ݺ� 
	{
		printf("%d\n", numArr[index]);				// 2��� ���� �迭�� ��Ҹ� ����Ѵ�. 
	}
	
	return 0;
} 
