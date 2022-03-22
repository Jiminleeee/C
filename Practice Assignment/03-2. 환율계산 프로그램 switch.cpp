#include <stdio.h>

int main()
{
	int won, type, resultChange, returnMoney;
	float originalChange, changeMoneyRate;
	const float RATE_USD = 1232.20;
	const float RATE_JPY = 1059.18;
	const float RATE_EUR = 1355.36;
	const float RATE_CNY = 194.69;
	const float RATE_GBP = 1612.76;

	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");
	scanf("%d", &won);

	printf("ȯ���� ��ȭ�� �����ϼ��� (1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP) : ");
	scanf("%d", &type);
	
	switch (type)
	{
		case 1:
			changeMoneyRate = RATE_USD;
			break;
		case 2:
			changeMoneyRate = RATE_JPY;
			break;
		case 3:
			changeMoneyRate = RATE_EUR;
			break;
		case 4:
			changeMoneyRate = RATE_CNY;
			break;
		case 5:
			changeMoneyRate = RATE_GBP;
			break;
		default:
			printf("�߸��� �Է��Դϴ�.");
			changeMoneyRate = -1;
			 
	}
	
	
	if (changeMoneyRate !=0)
	{
		originalChange = won / changeMoneyRate;
		resultChange = originalChange;
		returnMoney = (originalChange- resultChange)*changeMoneyRate;
		printf("ȯ�� : %d\n", resultChange); 
		printf("�Ž����� : %d ��\n", (returnMoney / 10) *10);	
	}
	
	return 0;
	
}
