#include <stdio.h>

int main() {

	int inTime = 0, button[3] = { 0 }, div = 0;

	scanf_s("%d", &inTime);

	/*3개의 버튼으로 intime이 불가능할 때*/
	if (inTime % 10 > 0) {
		printf("-1");
		exit(0);
	}

	button[0] = inTime / 300;
	div = inTime % 300;

	button[1] = div / 60;
	div = div % 60;

	button[2] = div / 10;

	printf("%d %d %d", button[0], button[1], button[2]);

	return 0;
}