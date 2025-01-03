#include <stdio.h>

int square(int n){
	
	return n * n;
}

int main () {
	
	int x = 6;
	
	int sq = square(x);
	
	
	printf("The square of %d is %d", x, sq);
}