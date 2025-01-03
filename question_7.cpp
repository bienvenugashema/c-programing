
#include <stdio.h>

int numbers(int num1, int num2, int num3){
	
	if(num1 > num2 && num1 > num3) {
		printf("\n\n\nthe greater number is %d", num1);
	} else if( num2 > num1 && num2 > num3) {
		printf("\n\n\nThe second number is the greater which is %d", num2);
	}
	else {
		printf("\n\nThe third number is the greater which is %d", num3);
	}
	}
	
	


int main() {
	
	int a, b, c;
	
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("\n Enter the second number: ");
	scanf("%d", &b);
	printf("\n Enter the thired number: ");
	scanf("%d", &c);
	
	printf("\n\n\n We have thre numbers num1 = %d, num2 = %d, num3 = %d. We want to find the largest.", a, b, c);
	
	int nums = numbers(a,b,c);
}