#include <stdio.h>
int main()
{
	int numA, numB, numC, numD, numE;
	int max, min;
	
	printf("���� A �Է� : ");
	scanf("%d", &numA); 
	printf("���� B �Է� : ");
	scanf("%d", &numB); 
	printf("���� C �Է� : ");
	scanf("%d", &numC); 
	printf("���� D �Է� : ");
	scanf("%d", &numD);
	printf("���� E �Է� : ");
	scanf("%d", &numE);

// max�� min�� �����ؼ� ���Ѵ� 
  	max = numA;
 	min = numA;

//�ִ밪 	
 	if(numB > max) {
 		max = numB;
	}
 	if(numC > max) {
 		max = numC;
	 }
	if(numD > max){
		max = numD;
	}
	if(numE > max) {
		max = numE;
	}

//������	
	if(numB < min) {
 		min = numB;
	}
 	if(numC < min) {
 		min = numC;
	 }
	if(numD < min){
		min = numD;
	}
	if(numE < min) {
		min = numE;
	}

 
	printf("\n�ִ밪�� %d �Դϴ�\n", max);
	printf("�������� %d �Դϴ�", min);
	
	return 0;
	
}
