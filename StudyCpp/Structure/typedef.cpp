#include <stdio.h>

int main() {
	typedef int Pair[2];
	Pair point = { 3, 4 }; // int point[2] = { 3, 4 }; 와 동일한 표현     
	printf("(%d, %d)\n", point[0], point[1]);

	typedef const char *String;
	const char *name1 = "john";
	String name2 = "Lilly";

	String abc = "abc";
	printf("name : %s\n", name1);
	printf("name : %s\n", name2);
}