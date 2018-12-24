#include <stdio.h>

struct Point {
	int x, y;

	void pSwap() {
		int temp = x;
		x = y;
		y = temp;
	}
};

void pSwap(Point *p) {
	int temp = p->x;
	p->x = p->y;
	p->y = temp;
}

int main() {
	Point p = { 3, 4 };

	p.pSwap();
	printf("(%d, %d)\n", p.x, p.y);

	pSwap(&p);
	printf("(%d, %d)\n", p.x, p.y);
}