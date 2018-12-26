// getchar / putchar
// gets / puts
// 속도 면에선 scanf 보다 더 빠름

// 난수 출력 ( rand(), srand(time(NULL)) )

// exit(0);		// 함수를 즉시 종료시키고 이전 스택으로 돌아감 (stdlib.h 추가해야함)

#include <stdio.h>
#include <stdlib.h>		// rand(), srand()를 쓰기 위한 header
#include <time.h>

int main() {
	char ch;

	printf("char 문자 입력 : ");
	ch = getchar();		// char 를 저장해서 return 해주는 함수
	putchar(ch);		// char를 출력해주는 함수

	char str[100];

	printf("\nstring 문자 입력 : ");
	gets_s(str);		//  string을 저장하는 함수 
	puts(str);			// string을  출력해주는 함수
						// scanf 는 띄어쓰기하면 다른 문자로 받아드리지만, 이건 띄어쓰기까지 한 string으로 받음

	printf("\n==============================================\n\n");

	for (int i = 0; i < 10; i++) {
		// rand()는 컴파일러에 따라 short (또는 int)형 자료의 최대값 사이의 랜덤값을 출력
		int random = rand() % 10 + 1;
		// random 값을 출력해보면 실행할때마다 같은 값을 출력함
		printf("%d ", random);
	}
	printf("\n");

	// 1970/01/01 00:00:00로부터 지난 시간 (초 단위)
	int sec = time(NULL);
	// srand() 함수에 넣어 매번 바뀌게 난수 출력( seed random 이라는 뜻)
	srand(sec);

	for (int i = 0; i < 10; i++) {
		int random = rand() % 10 + 1;
		printf("%d ", random);
	}
	printf("\n");

	
}