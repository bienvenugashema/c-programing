#include <stdio.h>

int main() {
	
	int num2 = 5;

	
	int *ptr = &num2;
	
	
	printf("The value of pointer is %d", *ptr);
	printf("\nThe addres of the variable is %p");
	printf("\n The addres of the pointer is %p", (void *)&ptr);
}