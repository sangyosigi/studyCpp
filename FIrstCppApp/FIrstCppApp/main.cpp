#include <stdio.h>
#include <cursor.h>

int main()
{
	int num;
	int input;

	randomize();
	for (;;) {
		num = random(100) + 1;
		puts("���� ���� ���ڸ� ���� ������.");
		do {
			printf("���ڸ� �Է��ϼ���(���� ���� 999) : ");
			scanf("%d", &input);
			if (input == 999) {
				exit(0);
			}
			if (input == num) {
				puts("������ϴ�.\n");
			} else if (input > num) {
				puts("�Է��� ���ں��� �� �۽��ϴ�.");
			} else {
				puts("�Է��� ���ں��� �� Ů�ϴ�.");
			}
		} while (input != num);
	}
}
