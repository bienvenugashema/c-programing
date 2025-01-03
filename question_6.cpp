
#include <stdio.h>

int main() {
	
	char names[100];
	
	printf("Enter your names: ");
	fgets(names, sizeof(names), stdin);
	
	
	printf("the names are %s", names);
}