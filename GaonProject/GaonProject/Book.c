//Book에 관한 기능을 수행하는 함수 모음

#include "stdafx.h"
#include "Book.h"

#define MAX 1000

int T = 3, A = 1, E = 9, M = 14, S = 5;

void BookBorrow() {
	char BookName[30];

	printf("대출할 책 이름 : ");
	scanf("%s", BookName);

	FILE* fp;
	//char file[1000];

	if (fp = fopen("C:\\Users\\NI3S\\Downloads\\BookList.txt", "r")) {
		if (strcmp(BookName, "Toeic") == 0 && T != 0) {
			printf("대출이 완료되었습니다.\n");
			T--;
			//printf("\nToeic 책 : %d권\n", T); //확인용
		}
		else if (strcmp(BookName, "Toeic") == 0 && T == 0) {
			printf("대출 가능한 책이 없습니다.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "Apple") == 0 && A != 0) {
			printf("대출이 완료되었습니다.\n");
			A--;
			//printf("\nApple 책 : %d권\n", A); //확인용
		}
		else if (strcmp(BookName, "Apple") == 0 && A == 0) {
			printf("대출 가능한 책이 없습니다.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "English") == 0 && E != 0) {
			printf("대출이 완료되었습니다.\n");
			E--;
			//printf("\nEnglish 책 : %d권\n", E); //확인용
		}
		else if (strcmp(BookName, "English") == 0 && E == 0) {
			printf("대출 가능한 책이 없습니다.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "Math") == 0 && M != 0) {
			printf("대출이 완료되었습니다.\n");
			M--;
			//printf("\nMath 책 : %d권\n", M); //확인용
		}
		else if (strcmp(BookName, "Math") == 0 && M == 0) {
			printf("대출 가능한 책이 없습니다.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "Speak") == 0 && S != 0) {
			printf("대출이 완료되었습니다.\n");
			S--;
			//printf("\nSpeak 책 : %d권\n", S); //확인용
		}
		else if (strcmp(BookName, "Speak") == 0 && S == 0) {
			printf("대출 가능한 책이 없습니다.\n");
		}
		fclose(fp);
	}
}

void BookReturn() {
	char BookName[30];

	printf("반납할 책 이름 : ");
	scanf("%s", BookName);

	FILE* fp;
	//char file[1000];

	if (fp = fopen("C:\\Users\\NI3S\\Downloads\\BookList.txt", "r")) {
		if (strcmp(BookName, "Toeic") == 0 && T < 3) {
			printf("반납이 완료되었습니다.\n");
			T++;
			//printf("\nToeic 책 : %d권\n", T); //확인용
		}
		else if (strcmp(BookName, "Toeic") == 0 && T >= 3) {
			printf("반납 가능한 책이 없습니다.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "Apple") == 0 && A < 1) {
			printf("반납이 완료되었습니다.\n");
			A++;
			//printf("\nApple 책 : %d권\n", A); //확인용
		}
		else if (strcmp(BookName, "Apple") == 0 && A >= 1) {
			printf("반납 가능한 책이 없습니다.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "English") == 0 && E < 9) {
			printf("반납이 완료되었습니다.\n");
			E++;
			//printf("\nEnglish 책 : %d권\n", E); //확인용
		}
		else if (strcmp(BookName, "English") == 0 && E >= 9) {
			printf("반납 가능한 책이 없습니다.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "Math") == 0 && M < 14) {
			printf("반납이 완료되었습니다.\n");
			M++;
			//printf("\nMath 책 : %d권\n", M); //확인용
		}
		else if (strcmp(BookName, "Math") == 0 && M >= 14) {
			printf("반납 가능한 책이 없습니다.\n");
		}
		//-------------------------------------------------------------
		if (strcmp(BookName, "Speak") == 0 && S < 5) {
			printf("반납이 완료되었습니다.\n");
			S++;
			//printf("\nSpeak 책 : %d권\n", S); //확인용
		}
		else if (strcmp(BookName, "Speak") == 0 && S >= 5) {
			printf("반납 가능한 책이 없습니다.\n");
		}
		//-------------------------------------------------------------
		fclose(fp);
	}
}