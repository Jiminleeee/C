#include <stdio.h>
int main()
{
	int decimal = 13;				// ������ 13�� �������� ��ȯ 
	int binary[20] = {0};			// ������ �迭 �ʱ�ȭ 
	
	int position = 0;				// ���� position = �ڸ��� 
	
	while(!(decimal == 0))					// �������� 0�� �ƴ� ������ �ݺ��Ѵ�. > 0�� �Ǹ� �����. (while��) 
	{
		binary[position] = decimal % 2;		// ������ �迭�� �������� 2�� ���� �������� �迭�Ѵ�.  
		decimal = decimal / 2;				// �������� 2�� ���� ���� ���� 
		
		position++;							// �ڸ��� ���� 
	} 
	
	// �迭�� ��Ҹ� �������� ��� 
	for(int index = position - 1; index >= 0; index--)		// �ڸ������� 1�� ���� �Ѵ�. (�迭�� �ε����� 0���� �����ϱ� ����) 
	{
		printf("%d", binary[index]);				
	}
	
	return 0;
} 
