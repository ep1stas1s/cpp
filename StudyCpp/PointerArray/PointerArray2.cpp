#include <stdio.h>

int main() {
	char str[] = "Hello";

	printf("%s\n\n", &str[0]);	// %s�� ��� ���ڽ��� �ּ�(�迭�� 0��° ������)�� ������
								// Null ���ڰ� ���� ������ �����

	char strings[3][10] = { "Hello", "World", "Doodle" };

	for (int i = 0; i < 3; i++) {
		printf("%s\n", &strings[i]);	// &strings[i][0] �� ���� ��
	}

	printf("\n");

	char *p_strings[3];

	for (int i = 0; i < 3; i++) {
		p_strings[i] = strings[i];
	}
	for (int i = 0; i < 3; i++) {
		printf("%s\n", p_strings[i]);
	}
}