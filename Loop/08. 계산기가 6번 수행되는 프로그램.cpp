#include <stdio.h>
int main()
{
	int number1, number2, result;
	int index;
	char formula;
	
	for(index=0; index<6;index++)
	{
	
		printf("������ �Է��ϼ��� : ", index);
		scanf("%d%c%d", &number1, &formula, &number2);
	
		if(formula == '+'){
			result = number1 + number2;
		}
		else if(formula == '-'){
			result = number1 - number2;
		}
		else if(formula == '*'){
			result = number1 * number2;
		}
		else if(formula == '/'){
			result = number1 / number2;
		}
		else if(formula == '%'){
			result = number1 % number2;
		}
		else if(formula == '^')
		{	result=1;						// �ʱⰪ�� 1 : 0�� ������ ������ 0�� ���´� 
			for(int i =0; i<number2; i++)	// i�� number2���� �ݺ� 
			{
				result *= number1;			// �����Ѵ� 
			}
		}
	
		printf("%d %c %d = %d �Դϴ�.\n\n", number1, formula, number2, result);
	}
	

	  
	return 0;	

	
}


