#include <stdio.h>
int main()
{
	int index, number;
	
	for(index = 2; index < 10; index+=3)	// �������� 3�ܾ� ��� ����ؾ� �Ѵ�. 
	{
		for(number = 1; number < 10; number++)
		{
			printf("%d * %d = %d\t%d * %d = %d\t%d * %d = %d\n", index, number,index*number, (index+1), number, (index+1)*number, index+2, number, (index+2)*number);		
		}
		
	printf("\n");	
	}	
	
	return 0;
} 
