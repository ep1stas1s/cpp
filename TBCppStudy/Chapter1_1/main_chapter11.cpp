#include <iostream> // Preprocessor Directive
#include <stdio.h>

using namespace std;

float main()
{
	printf("Hello, world");

	// %d ���� ��� (1, 2, 3, ...)
	printf("%d + %d = %d\n", 2, 3, 5);

	// %f �Ǽ� ��� ( 3.14, -2.0, ...)
	printf("%.2f\n", 3.141592);

	// %g �Ǽ� ��� (���� ���·ε� ���) ex)8.72e+09
	printf("%g\n", 3.141592);
	printf("%.3g\n", 879465156489654);

	// %c ����(Character) ���
	printf("%c %c %c \n", 'a', 'b', 'c');

	// %s : ���ڿ� ���
	printf("%s\n", "�ȳ��ϼ���");

	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d, %d", a, b);


	return 0;
}