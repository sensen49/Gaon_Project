//Screen�� ���� ����� �����ϴ� �Լ� ����

#include "stdafx.h"
#include "Screen.h"

#define MAX 1000

void login() {
	char id[6], pw[5];

	printf("****���� ���� ���α׷�****\n");
	printf("���̵� : ");
	scanf("%s", id);
	printf("��й�ȣ : ");
	scanf("%s", pw);

	if (strcmp(id, "admin") == 0 && strcmp(pw, "1234") == 0) {
		printf("�α��� ����\n");

		printf("\n�ƹ�Ű�� �Է��ϸ� ȭ�� �̵�\n");
		_getch(); //Visual Studio������ �տ� _(�����) �ٿ�����
	}
	else {
		printf("�α��� ����\n");

		exit(0);
	}
}

void menu() {

	system("cls"); //clean screen

	int num;

	printf("**************************\n");
	printf("1. å ��� ����\n");
	printf("2. å ����\n");
	printf("3. å �ݳ�\n");
	printf("4. ������\n");
	printf("**************************\n");

	printf("���ϴ� �۾� ��ȣ : ");
	scanf("%d", &num);

	switch (num){
	case 1: 
		system("cls"); //clean screen
		num1();
		break;
	case 2: 
		system("cls"); //clean screen
		num2();
		break;
	case 3: 
		system("cls"); //clean screen
		num3();
		break;
	case 4: 
		system("cls"); //clean screen
		exit(0);
	default: 
		break;
	}
}

void num1() {
	printf("********************\n");
	printf("****å ��� ȭ��****\n");
	printf("å �̸� ���Ⱑ�ɱǼ�\n");
	printf("********************\n");

	FILE* fp = fopen("C:\\Users\\NI3S\\Downloads\\BookList.txt", "w");
	char file[1000];

	fprintf(fp, "Toeic %d\n", T);
	fprintf(fp, "Apple %d\n", A);
	fprintf(fp, "English %d\n", E);
	fprintf(fp, "Math %d\n", M);
	fprintf(fp, "Speak %d\n", S);

	fclose(fp);

	if (fp = fopen("C:\\Users\\NI3S\\Downloads\\BookList.txt", "r")) {
		while (fgets(file, MAX, fp) != NULL) {
			printf("%s", file);
		}
		fclose(fp);
	}

	printf("\n�ƹ�Ű�� �Է��ϸ� ȭ�� �̵�\n");
	_getch(); //Visual Studio������ �տ� _(�����) �ٿ�����

	menu();
}

void num2() {
	printf("************************\n");
	printf("******å ���� ȭ��******\n");
	printf("************************\n");

	BookBorrow();

	printf("\n�ƹ�Ű�� �Է��ϸ� ȭ�� �̵�\n");
	_getch(); //Visual Studio������ �տ� _(�����) �ٿ�����

	menu();
}

void num3() {
	printf("************************\n");
	printf("******å �ݳ� ȭ��******\n");
	printf("************************\n");

	BookReturn();

	printf("\n�ƹ�Ű�� �Է��ϸ� ȭ�� �̵�\n");
	_getch(); //Visual Studio������ �տ� _(�����) �ٿ�����

	menu();
}