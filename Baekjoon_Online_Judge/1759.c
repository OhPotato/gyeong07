#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	int leng = 0;
	int cnt = 0;
	char pass[30] = "a b c";
	int flag[30] = { 0 };
	

	/*�� ���� L, C�� C���� ���ڵ� �Է�*/
	scanf_s("%d", &leng);
	scanf_s("%d", &cnt);

	for (int i = 0; i < cnt * 2; i++) {
		scanf_s("%c", &pass[i]);
	}


	/*�������� ���� ����*/
	char* ptr = strtok(pass, " ");
	int i = 0;

	while (ptr != NULL) {
		pass[i] = ptr;
		flag[i] = 0;
		ptr = strtok(NULL, " ");
	}


	/*���� L��ŭ ���� �̱�*/


	/*���ڿ� ����*/

	return 0;
}
