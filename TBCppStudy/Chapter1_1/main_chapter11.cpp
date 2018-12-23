#include <iostream> // Preprocessor Directive
#include <stdio.h>

using namespace std;

float main()
{
	printf("Hello, world");

	// %d 정수 출력 (1, 2, 3, ...)
	printf("%d + %d = %d\n", 2, 3, 5);

	// %f 실수 출력 ( 3.14, -2.0, ...)
	printf("%.2f\n", 3.141592);

	// %g 실수 출력 (지수 형태로도 출력) ex)8.72e+09
	printf("%g\n", 3.141592);
	printf("%.3g\n", 879465156489654);

	// %c 문자(Character) 출력
	printf("%c %c %c \n", 'a', 'b', 'c');

	// %s : 문자열 출력
	printf("%s\n", "안녕하세요");

	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d, %d", a, b);


	return 0;
}