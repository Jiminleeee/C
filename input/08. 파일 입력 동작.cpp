#include <stdio.h>
int main()
{
	//file�� ������ ���� ��
	 
	int inputData = 0;
	int resultData;
	
	FILE * fp;
	fp = fopen("input.txt", "r");				//"r" : �б� ��� 
	resultData = fscanf(fp, "%d", &inputData);	/*fscanf�� ���� fp���� ������ ���Ͽ��� ���� �� �ϳ��� �޾Ƽ� inputData ������ ���� 
													fscanf ���� ���� ����� resultData�� ����*/ 
	printf("��� : %d\n", resultData);			// �ƹ� ���� ���� ���� ������ �ǹ̷� -1�� ��µȴ� 
	printf("�Է� �� : %d\n", inputData);		//���� ������ �޾ƿ� ���� ���� �ʱ갪 0�� ��µȴ� 
	fclose(fp);
	
	return 0;
}
