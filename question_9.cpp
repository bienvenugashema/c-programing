// c programming to interchange 2 values without 3rd variable 

#include <stdio.h>

int main () {
	
	int a = 12;
	int b = 13;
	
	a = a + b; // it takes a and make it the sum of all numbers
	b = a - b; // it substarcts b from a, a + b = 25, then a - b = 12, here b wll get the values of a
	a = a - b;// the  here a will be 25 - 12 = 13, which is theorgina l value of b.
	
	printf("Initial values were a = 12 and b = 13");
	
	printf("\na = %d",  a);
	printf("\n b = %d", b);
}