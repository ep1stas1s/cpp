#include <stdio.h>

	//typedef struct { int x, y; } Point;
	// 위와같이 적어도 가능
	struct Point { int x, y; } ;

int main() {

	Point p;

	p.x = 3;
	p.y = 4;

	printf("(%d, %d)\n", p.x, p.y);
	printf("sizeof(p) = %d\n", sizeof(p));
}