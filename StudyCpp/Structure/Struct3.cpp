#include <stdio.h>

struct Time {
	int h, m, s;

	// ��� �Լ� (����ü�� ������ ������ ���̴� �Լ��� ��� ���Խ�Ű�� �� ��õ)
	int totalSec() {
		return 3600 * h + 60 * m + s;
	}
};

// �ܺ� �Լ�
int totalSec(Time t) {
	return 3600 * t.h + 60 * t.m + t.s;
}

int main() {
	Time t = { 1, 22, 45 };

	// �� �� ������ ����ϴ� �Լ�
	printf("%d\n", totalSec(t));	// �ܺ� �Լ� ȣ��
	printf("%d\n", t.totalSec());	// ��� �Լ� ȣ��
}