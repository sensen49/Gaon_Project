//1. 프로그램 구동 본체
//2. 화면에 보여주는 역할
//3. 사용자로부터 입력받은 값을 넘겨주어 초기화
//4. 다른 곳에 초기화되어 있는 값을 받아옴
#include "stdafx.h"

int main() {

	//init(); //모든 초기화를 담당하는 함수 void 타입

	while (1) {
		//화면에 출력
		login();

		system("cls"); //clean screen

		menu();

		//값 갱신
		break;
	}

	//close(); //free, fclose 등 메모리 해제 담당 함수

	return 0;
}