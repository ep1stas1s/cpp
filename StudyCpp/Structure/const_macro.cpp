#include <stdio.h>

// ��ũ��
#define PPII 3.141592

int main() {
	// ��ũ�� : ��ܿ��� �����ϰ�, �Ʒ��� ��� PPII�� �ش� ������ ġȯ (�ּҰ�X)
	double a = PPII;
	printf("�� = %.2f\n", PPII);
	//printf("�� = %.2f\n", &PPII);

	// ��� : �Һ��� �� (�ּҰ�O)
    const double PI = 3.141592;
	double b = PI;
	printf("�� = %.2f\n", PI);
	printf("�� = %.2f\n", &PI);
}