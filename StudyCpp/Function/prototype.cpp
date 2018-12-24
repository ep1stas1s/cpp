// prototype : �Լ��� ��� �����ϰԸ� ���� ��
// prototype�� ������� �ʾ��� ��, �̸� ������� ���� �Լ��� ȣ���ϸ� Error
// -> prototype�� ��������μ� �Ʒ��� ���� ������ ���� 
// ex)
// void walk(int distance);

// 1. A �Լ��� B �Լ��� ���� ȣ���ϴ� ��Ȳ���� ��� ����
// 2. �� �Լ����� ����/��ġ�� ��� ����
// 3. ������ (�� ���� �Լ����� ���縦 �ľ� ����)
// (�ʼ��� �ƴ�)

#include <stdio.h>

// �κ��� ����� �� �ȱ�, ȸ�� ����� ����
void walk(int);
void rotate(int);
void drawSquare();




// �ȱ�
void walk(int distance) {
	printf("%dcm�� �ɾ����ϴ�.\n", distance);
}

// ȸ��
void rotate(int angle) {
	printf("%d�� ȸ���߽��ϴ�.\n", angle);
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