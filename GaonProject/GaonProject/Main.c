//1. ���α׷� ���� ��ü
//2. ȭ�鿡 �����ִ� ����
//3. ����ڷκ��� �Է¹��� ���� �Ѱ��־� �ʱ�ȭ
//4. �ٸ� ���� �ʱ�ȭ�Ǿ� �ִ� ���� �޾ƿ�
#include "stdafx.h"

int main() {

	//init(); //��� �ʱ�ȭ�� ����ϴ� �Լ� void Ÿ��

	while (1) {
		//ȭ�鿡 ���
		login();

		system("cls"); //clean screen

		menu();

		//�� ����
		break;
	}

	//close(); //free, fclose �� �޸� ���� ��� �Լ�

	return 0;
}