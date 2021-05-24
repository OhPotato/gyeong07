#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	int leng = 0;
	int cnt = 0;
	char pass[30] = "a b c";
	int flag[30] = { 0 };
	

	/*두 정수 L, C와 C개의 문자들 입력*/
	scanf_s("%d", &leng);
	scanf_s("%d", &cnt);

	for (int i = 0; i < cnt * 2; i++) {
		scanf_s("%c", &pass[i]);
	}


	/*공백으로 문자 구분*/
	char* ptr = strtok(pass, " ");
	int i = 0;

	while (ptr != NULL) {
		pass[i] = ptr;
		flag[i] = 0;
		ptr = strtok(NULL, " ");
	}


	/*길이 L만큼 문자 뽑기*/


	/*문자열 정렬*/

	return 0;
}
