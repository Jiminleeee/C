#include <stdio.h>
int main()
{
// ��� ���� ���α׷� 1. 2���� ������ 1���� ������  2. �����ڿ� ���� �������  3. switch ~ case 	
	
	int input1, input2;
	char operation;
	
	printf("���� ������ ���� �Է��ϼ���\n(��: 5 (+,-,*,/) 7) : ");
	scanf("%d %c %d", &input1, &operation, &input2);
	
	switch(operation)
	{
		case '+':
			printf("%d %c %d = %d\n", input1, operation, input2, input1+input2);
			break;
		
		case '-':
			printf("%d %c %d = %d\n", input1, operation, input2, input1-input2);
			break;
		
		case '*':
			printf("%d %c %d = %d\n", input1, operation, input2, input1*input2);
			break;
			
		case '/':
			printf("%d %c %d = %d\n", input1, operation, input2, input1/input2);
			break;
			
		default :
			printf("�����ڸ� �߸� �Է��ϼ̽��ϴ�.");
			break;
			 
	}
	
	return 0;
 } 
