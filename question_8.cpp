#include <stdio.h>

struct Point {
	
	int x = 10;
	
	int y = 12;
};

int main() {
	struct Point p;
	
	printf("x = %d", p.x);
	printf("\n y = %d", p.y);
}