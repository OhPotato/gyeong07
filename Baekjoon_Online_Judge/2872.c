#include <stdio.h>
#include <stdlib.h>

int main() {

	int maxIndex = 0;
	int Index = 0;
	int bookNum = 0;

	scanf_s("%d", &bookNum);
	int* book = (int*)malloc(sizeof(int) * bookNum);

	//������ å ���� �Է�
	for (int i = 0; i < bookNum; i++) {
		scanf_s("%d", &book[i]);
	}

	//å�� ������ ��ȣ�� ��� ��ġ ���
	for (int k = 0; k < bookNum; k++) {
		if (bookNum == book[k]) {
			maxIndex = k;
		}
	}

	Index = maxIndex;
	for (int j = maxIndex; j >= 0 ; j--) {
		if (book[j] < book[j - 1]) {
			printf("Ƚ��: %d\n", j);
			exit(0);
		}
		else if (maxIndex == 0) {
			printf("Ƚ��: %d\n", bookNum - 1);
			exit(0);
		}
		else {
			Index = j - 1;
		}
	}

	free(book);
	return 0;
}