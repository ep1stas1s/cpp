#include <stdio.h>

// 매크로
#define PPII 3.141592

int main() {
	// 매크로 : 상단에서 정의하고, 아래의 모든 PPII를 해당 값으로 치환 (주소값X)
	double a = PPII;
	printf("π = %.2f\n", PPII);
	//printf("π = %.2f\n", &PPII);

	// 상수 : 불변의 값 (주소값O)
    const double PI = 3.141592;
	double b = PI;
	printf("π = %.2f\n", PI);
	printf("π = %.2f\n", &PI);
}