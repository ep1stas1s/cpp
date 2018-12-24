#include <stdio.h>

int main() {
	char str[] = "Hello";

	printf("%s\n\n", &str[0]);	// %s의 경우 글자시작 주소(배열의 0번째 포인터)를 적으면
								// Null 문자가 나올 때까지 출력함

	char strings[3][10] = { "Hello", "World", "Doodle" };

	for (int i = 0; i < 3; i++) {
		printf("%s\n", &strings[i]);	// &strings[i][0] 과 같은 말
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