//Screen에 관한 기능을 수행하는 함수 모음

#include "stdafx.h"
#include "Screen.h"

#define MAX 1000

void login() {
	char id[6], pw[5];

	printf("****도서 관리 프로그램****\n");
	printf("아이디 : ");
	scanf("%s", id);
	printf("비밀번호 : ");
	scanf("%s", pw);

	if (strcmp(id, "admin") == 0 && strcmp(pw, "1234") == 0) {
		printf("로그인 성공\n");

		printf("\n아무키나 입력하면 화면 이동\n");
		_getch(); //Visual Studio에서는 앞에 _(언더바) 붙여야함
	}
	else {
		printf("로그인 실패\n");

		exit(0);
	}
}

void menu() {

	system("cls"); //clean screen

	int num;

	printf("**************************\n");
	printf("1. 책 목록 보기\n");
	printf("2. 책 대출\n");
	printf("3. 책 반납\n");
	printf("4. 나가기\n");
	printf("**************************\n");

	printf("원하는 작업 번호 : ");
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
	printf("****책 목록 화면****\n");
	printf("책 이름 대출가능권수\n");
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

	printf("\n아무키나 입력하면 화면 이동\n");
	_getch(); //Visual Studio에서는 앞에 _(언더바) 붙여야함

	menu();
}

void num2() {
	printf("************************\n");
	printf("******책 대출 화면******\n");
	printf("************************\n");

	BookBorrow();

	printf("\n아무키나 입력하면 화면 이동\n");
	_getch(); //Visual Studio에서는 앞에 _(언더바) 붙여야함

	menu();
}

void num3() {
	printf("************************\n");
	printf("******책 반납 화면******\n");
	printf("************************\n");

	BookReturn();

	printf("\n아무키나 입력하면 화면 이동\n");
	_getch(); //Visual Studio에서는 앞에 _(언더바) 붙여야함

	menu();
}