#include <stdio.h>
int main()
{
	char affiliation[20];		/*���� ���� ���� �����ϴ� ������ �Է� �ޱ� ���ؼ���
								char�� ������ �� ���� ���� �̻��� �迭�� �����ϰų� char affiliation�� ���� �����ͷ� �����ؾ� �Ѵ�.*/ 
	
	scanf("%s", affiliation);	// �迭 �������� Ư�� index�� �������� �ʰ� ������ ���� �ּ� ���� �ش��ϱ� ������ &�� ������ �ʴ´�. 
	printf("�Ҽ� : %s\n", affiliation);		//������ ����ϱ� ���ؼ� %s�� ��� 
	
	return 0;
}
