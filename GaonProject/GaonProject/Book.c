//Book�� ���� ����� �����ϴ� �Լ� ����

#include "stdafx.h"
#include "Book.h"

#define MAX 1000

int T = 3, A = 1, E = 9, M = 14, S = 5;

void BookBorrow() {
	char BookName[30];

	printf("������ å �̸� : ");
	scanf("%s", BookName);

	FILE* fp;
	//char file[1000];

	if (fp = fopen("C:\\Users\\NI3S\\Downloads\\BookList.txt", "r")) {
		if (strcmp(BookName, "Toeic") == 0 && T != 0) {
			printf("������ �Ϸ�Ǿ����ϴ�.\n");
			T--;
			//printf("\nToeic å : %d��\n", T); //Ȯ�ο�
		}
		else if (strcmp(BookName, "Toeic") == 0 && T == 0) {
			printf("���� ������ å�� �����ϴ�.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "Apple") == 0 && A != 0) {
			printf("������ �Ϸ�Ǿ����ϴ�.\n");
			A--;
			//printf("\nApple å : %d��\n", A); //Ȯ�ο�
		}
		else if (strcmp(BookName, "Apple") == 0 && A == 0) {
			printf("���� ������ å�� �����ϴ�.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "English") == 0 && E != 0) {
			printf("������ �Ϸ�Ǿ����ϴ�.\n");
			E--;
			//printf("\nEnglish å : %d��\n", E); //Ȯ�ο�
		}
		else if (strcmp(BookName, "English") == 0 && E == 0) {
			printf("���� ������ å�� �����ϴ�.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "Math") == 0 && M != 0) {
			printf("������ �Ϸ�Ǿ����ϴ�.\n");
			M--;
			//printf("\nMath å : %d��\n", M); //Ȯ�ο�
		}
		else if (strcmp(BookName, "Math") == 0 && M == 0) {
			printf("���� ������ å�� �����ϴ�.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "Speak") == 0 && S != 0) {
			printf("������ �Ϸ�Ǿ����ϴ�.\n");
			S--;
			//printf("\nSpeak å : %d��\n", S); //Ȯ�ο�
		}
		else if (strcmp(BookName, "Speak") == 0 && S == 0) {
			printf("���� ������ å�� �����ϴ�.\n");
		}
		fclose(fp);
	}
}

void BookReturn() {
	char BookName[30];

	printf("�ݳ��� å �̸� : ");
	scanf("%s", BookName);

	FILE* fp;
	//char file[1000];

	if (fp = fopen("C:\\Users\\NI3S\\Downloads\\BookList.txt", "r")) {
		if (strcmp(BookName, "Toeic") == 0 && T < 3) {
			printf("�ݳ��� �Ϸ�Ǿ����ϴ�.\n");
			T++;
			//printf("\nToeic å : %d��\n", T); //Ȯ�ο�
		}
		else if (strcmp(BookName, "Toeic") == 0 && T >= 3) {
			printf("�ݳ� ������ å�� �����ϴ�.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "Apple") == 0 && A < 1) {
			printf("�ݳ��� �Ϸ�Ǿ����ϴ�.\n");
			A++;
			//printf("\nApple å : %d��\n", A); //Ȯ�ο�
		}
		else if (strcmp(BookName, "Apple") == 0 && A >= 1) {
			printf("�ݳ� ������ å�� �����ϴ�.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "English") == 0 && E < 9) {
			printf("�ݳ��� �Ϸ�Ǿ����ϴ�.\n");
			E++;
			//printf("\nEnglish å : %d��\n", E); //Ȯ�ο�
		}
		else if (strcmp(BookName, "English") == 0 && E >= 9) {
			printf("�ݳ� ������ å�� �����ϴ�.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "Math") == 0 && M < 14) {
			printf("�ݳ��� �Ϸ�Ǿ����ϴ�.\n");
			M++;
			//printf("\nMath å : %d��\n", M); //Ȯ�ο�
		}
		else if (strcmp(BookName, "Math") == 0 && M >= 14) {
			printf("�ݳ� ������ å�� �����ϴ�.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "Speak") == 0 && S < 5) {
			printf("�ݳ��� �Ϸ�Ǿ����ϴ�.\n");
			S++;
			//printf("\nSpeak å : %d��\n", S); //Ȯ�ο�
		}
		else if (strcmp(BookName, "Speak") == 0 && S >= 5) {
			printf("�ݳ� ������ å�� �����ϴ�.\n");
		}
		//-------------------------------------------------------------
		fclose(fp);
	}
}