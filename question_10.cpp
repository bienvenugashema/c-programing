#include <stdio.h>

int main () {
	
	char str[] = "mwimule bienvenu";
	
	int len = 0;
	
	while(str[len] !='\0'){
		len++;
	}
	
	printf("The lengthof the str is %d", len);
	
}