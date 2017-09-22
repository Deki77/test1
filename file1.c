#include <stdio.h>

int main(){
	int sum = 0;
	int mask = 3;
	sum = 89 + 71;
	int newSum = sum >> mask;
	printf("hello world");
	printf("Sum shifted by 3 is: %d", newSum);
}