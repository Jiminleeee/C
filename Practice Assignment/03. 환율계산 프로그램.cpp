#include <stdio.h>

int main()
{
	int won, type, resultChange, returnMoney;
	float originalChange, changeMoneyRate;
	
	// ȯ�� ��� > ���������� Ȱ�� 
	const float RATE_USD = 1232.20;
	const float RATE_JPY = 1059.18;
	const float RATE_EUR = 1355.36;
	const float RATE_CNY = 194.69;
	const float RATE_GBP = 1612.76;

	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");
	scanf("%d", &won);

	printf("ȯ���� ��ȭ�� �����ϼ��� (1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP) : ");
	scanf("%d", &type);
	
	if(type == 1)
	{
		changeMoneyRate = RATE_USD;	
	}
	
	
	else if(type == 2)
	{
		changeMoneyRate = RATE_JPY;
	}
	
	
	else if(type == 3)
	{
		changeMoneyRate = RATE_EUR;
	}
	
	
	else if(type == 4)
	{
		changeMoneyRate = RATE_CNY;		
	}
	
	
	else if(type == 5)
	{
		changeMoneyRate = RATE_GBP;
	}
	
	
	else
	{
		printf("�߸��� �Է��Դϴ�");
		changeMoneyRate = 0; 
	}
	
	
	if (changeMoneyRate !=0)
	{
		originalChange = won / changeMoneyRate;		// originalChange�� �Ǽ��� ���� 
		resultChange = originalChange;				// resultChange�� ������ ���� 
		returnMoney = (originalChange- resultChange)*changeMoneyRate;	// returnMoney�� ����ϱ� ���� �Ҽ� �κ��� ��ȭ�� ��� 
		printf("ȯ�� : %d\n", resultChange); 		// ������ �� �κи� ȯ�� 
		printf("�Ž����� : %d ��\n", (returnMoney / 10) *10);	// 1�� �κ� ���� (10���� ������ 1�� �κ� �����> �ٽ� 10�� ���� 10�� ������) 
	}
	
	return 0;
}
