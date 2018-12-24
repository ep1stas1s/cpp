// prototype : 함수가 어떤지 간단하게만 적는 것
// prototype을 명시하지 않았을 때, 미리 선언되지 않은 함수를 호출하면 Error
// -> prototype을 명시함으로서 아래와 같은 장점을 얻음 
// ex)
// void walk(int distance);

// 1. A 함수와 B 함수가 서로 호출하는 상황에서 사용 가능
// 2. 각 함수들의 순서/위치가 상관 없음
// 3. 가독성 (한 눈에 함수들의 존재를 파악 가능)
// (필수는 아님)

#include <stdio.h>

// 로봇을 만드는 데 걷기, 회전 기능을 만듬
void walk(int);
void rotate(int);
void drawSquare();




// 걷기
void walk(int distance) {
	printf("%dcm를 걸었습니다.\n", distance);
}

// 회전
void rotate(int angle) {
	printf("%d도 회전했습니다.\n", angle);
}

void drawSquare() {
	for (int i = 0; i < 4; i++) {
		walk(10);
		rotate(90);
	}
}

int main() {
	drawSquare();
}