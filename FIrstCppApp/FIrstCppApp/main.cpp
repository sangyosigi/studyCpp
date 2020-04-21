#include <stdio.h>
#include <cursor.h>

int main()
{
	int num;
	int input;

	randomize();
	for (;;) {
		num = random(100) + 1;
		puts("제가 만든 숫자를 맞춰 보세요.");
		do {
			printf("숫자를 입력하세요(끝낼 때는 999) : ");
			scanf("%d", &input);
			if (input == 999) {
				exit(0);
			}
			if (input == num) {
				puts("맞췄습니다.\n");
			} else if (input > num) {
				puts("입력한 숫자보다 더 작습니다.");
			} else {
				puts("입력한 숫자보다 더 큽니다.");
			}
		} while (input != num);
	}
}
