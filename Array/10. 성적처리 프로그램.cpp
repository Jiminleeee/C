#include <stdio.h>

int main() 
{  // �л��� �ִ� 20, ������ �ִ� 10����� ���� 
	int score[21][10] = {0};			// score[�л���ȣ][�����ȣ] > ��� ���� ���� 
	int sum[21] = {0};					// sum[�л���ȣ] > �л���ȣ�� ���� ���� 
	int avg[21] = {0};					// avg[�л���ȣ] > �л���ȣ�� ���� ��� 
	int subjectSum[10] = {0};			// subjectsum[�����ȣ] > ���� ���� 
	float subjectAvg[10]; 				// subjectAvg[�����ȣ] > ���� ��� 
	
	int studentCount = 0;				// �л� �� 
	int subjectCount = 0;				// ���� ��  
	
	printf("�л� �� �Է� : ");
	scanf("%d", &studentCount);
	
	printf("���� �� �Է� : ");
	scanf("%d", &subjectCount);
	
	for(int index = 0; index <studentCount; index++) 		// �л� ��ȣ  
	{
		printf("Koposw%d �л��� ���� %d���� ���ʴ�� �Է��ϼ���: ", index, subjectCount);
		for(int index2 = 0; index2 < subjectCount; index2++)  	// ���� ��ȣ  
		{
			scanf("%d", &score[index][index2]);				// �л� ��ȣ�� ���� ���������� �迭�� �޴´�. 
		}
		
	}
	for(int index = 0; index <studentCount; index++) 		// �л� ��ȣ 
	{
		int sum = 0;					
		float avg = 0;			// ����� �Ǽ��� ���� 
		for(int index2 = 0; index2 < subjectCount; index2++) 	// ���� ��ȣ 
		{
			sum += score[index][index2];					// �л���ȣ�� ���� ���� 
			subjectSum[index2] += score[index][index2];		// ���� ���� 
		}
		
		avg = sum / (float)subjectCount;					// �л���ȣ�� ���� ���  // ���� �Ǽ��� ���ϱ� ���� subjectCount�� �Ǽ��� ���� 
		printf("Koposw%d �л��� ���� %d, ��� %5.2f\n", index, sum, avg);
	}
	for(int index = 0; index < subjectCount; index++) 
	{
		subjectAvg[index] = subjectSum[index] / (float)studentCount;		// ���� ��� // ���� �Ǽ��� ���ϱ� ���� studentCount�� �Ǽ��� ���� 
		printf("����%d ��� %5.2f\n", index, subjectAvg[index]);
	}
	return 0;
}
