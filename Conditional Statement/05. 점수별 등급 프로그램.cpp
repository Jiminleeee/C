#include <stdio.h>
int main()
{
// A : 90 ~ 100, B : 80 ~ 90, C : 70 ~ 80, D : 60 ~ 70 , F : 0 ~ 60	

	int score;
	char grade;		// ����� �����̹Ƿ� char�� ���� 
	
	printf("�л� ���� �Է� : ");
	scanf("%d", &score);
	
	if(score >= 90)
	{
		grade = 'A';
	}
	else if(score >= 80)
	{
		grade = 'B';
	}
	else if(score >= 70)
	{
		grade = 'C';
	}
	else if(score >= 60)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
	
	printf("�л� ���� : %d\t��� : %c\n", score, grade);
	
	return 0;
} 
