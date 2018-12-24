#include <stdio.h>

struct Time {
	int h, m, s;

	// 멤버 함수 (구조체와 밀접한 관련을 보이는 함수의 경우 포함시키는 걸 추천)
	int totalSec() {
		return 3600 * h + 60 * m + s;
	}
};

// 외부 함수
int totalSec(Time t) {
	return 3600 * t.h + 60 * t.m + t.s;
}

int main() {
	Time t = { 1, 22, 45 };

	// 총 몇 초인지 계산하는 함수
	printf("%d\n", totalSec(t));	// 외부 함수 호출
	printf("%d\n", t.totalSec());	// 멤버 함수 호출
}