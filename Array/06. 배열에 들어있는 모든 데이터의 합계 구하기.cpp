#include <stdio.h>
int main()
{
	int numArr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};			// ũ�Ⱑ 10�� int�� �迭 
	int sum;			// �հ踦 ������ ���� 
	
	for(int index = 0; index <= 9; index++)			// �迭�� ��� ������ŭ �ݺ� 
	{
		sum += numArr[index];				// �հ� = �迭�� ��Ҹ� �ϳ��� ���Ѵ�. 
	}
	
	printf("%d\n", sum);
	
	return 0;
}
