// getchar / putchar
// gets / puts
// �ӵ� �鿡�� scanf ���� �� ����

// ���� ��� ( rand(), srand(time(NULL)) )

// exit(0);		// �Լ��� ��� �����Ű�� ���� �������� ���ư� (stdlib.h �߰��ؾ���)

#include <stdio.h>
#include <stdlib.h>		// rand(), srand()�� ���� ���� header
#include <time.h>

int main() {
	char ch;

	printf("char ���� �Է� : ");
	ch = getchar();		// char �� �����ؼ� return ���ִ� �Լ�
	putchar(ch);		// char�� ������ִ� �Լ�

	char str[100];

	printf("\nstring ���� �Է� : ");
	gets_s(str);		//  string�� �����ϴ� �Լ� 
	puts(str);			// string��  ������ִ� �Լ�
						// scanf �� �����ϸ� �ٸ� ���ڷ� �޾Ƶ帮����, �̰� ������� �� string���� ����

	printf("\n==============================================\n\n");

	for (int i = 0; i < 10; i++) {
		// rand()�� �����Ϸ��� ���� short (�Ǵ� int)�� �ڷ��� �ִ밪 ������ �������� ���
		int random = rand() % 10 + 1;
		// random ���� ����غ��� �����Ҷ����� ���� ���� �����
		printf("%d ", random);
	}
	printf("\n");

	// 1970/01/01 00:00:00�κ��� ���� �ð� (�� ����)
	int sec = time(NULL);
	// srand() �Լ��� �־� �Ź� �ٲ�� ���� ���( seed random �̶�� ��)
	srand(sec);

	for (int i = 0; i < 10; i++) {
		int random = rand() % 10 + 1;
		printf("%d ", random);
	}
	printf("\n");

	
}