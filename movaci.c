#include <stdlib.h>
#include <stdio.h>
#include <math.h>
																									/* for ��������� �� ��������� �� � ��������*/
int main() {
	int a, b;																			// ��������� ����� �� ���������
	char vidp [3];																	 // ³������ ����������� �� ����������� ��������
	system("chcp 1251 & cls");									// ���������� � ������
	do {
		do {
			printf("�����!\n������ ����� ���� ����� ����������: ");
			scanf_s("%d", &a);  									  // ������� ��� �����������
			fseek(stdin, 0, SEEK_END);						 // ������� ������
			if (a > 0 && a <= 31) {								// �������� �� ��������� �����
				printf("\n������!!");
			}
			else {																// �������� �� ����������� �����
				printf("\n�������!");
			}
		} while (a <= 0 || a > 31);
		printf("\n������������ ������? ");
		while ((vidp = getchar()) == ' ' || vidp == '\n' || vidp == '\t');
		fseek(stdin, 0, SEEK_END);
	} while (vidp == 'Yes' || vidp == 'yes' || vidp == "���" || vidp == "���" || vidp == 'OK' || vidp == 'ok' || vidp == "��" || vidp == "��" || vidp == 'y' || vidp == 'Y' || vidp == 'YES' || vidp == "���");
	do {
		printf("\n������, ����� �������� �����: ");
		scanf_s("%d", &b);  									  // ������� ��� �����������
		fseek(stdin, 0, SEEK_END);						 // ������� ������
		if (a > 0 && a <= 12) {								// �������� �� ��������� �����
			printf("\n������!!");
		}
		else { // �������� �� ����������� �����
			printf("\n�������!");
		}
	} while (a <= 0 || a > 12);
	printf("\n���� ��� ���� ���������� ����: %d, %d \n\n", a, b); /*���� ���������� (&) ��������������� ��� ���������� �����, � �� ���������*/
	system("pause");
	return 0;
}
