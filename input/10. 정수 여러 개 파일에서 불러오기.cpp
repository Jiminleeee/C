#include <stdio.h>
int main()
{	
//file :  10 20 30 40 50 60 70 80 90 100  
	int inputData = 0;
	int resultData;
	
	FILE * fp;
	fp = fopen("input.txt", "r");
	printf("�Է� �� : ");
	while(fscanf(fp, "%d", &inputData) !=-1)		/*while���� ����� fscanf�� ���� -1�� �ƴ� ������ �ݺ��Ѵ�(���̻� �����Ͱ� ���� �� ����)*/
	{
		printf("%d ", inputData);		//%d �ڿ� ��ĭ�� ������ �������� ���� 
	}
	fclose(fp); 
	
	return 0;
}
