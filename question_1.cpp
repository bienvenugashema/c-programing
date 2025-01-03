
#include <stdio.h>
#include <string.h>

struct Book {
	char title[100];
	char autor[100];
	double price;
};

int main () {
	struct Book myBook;
	
	strcpy(myBook.title, "Mathematics Book");
	strcpy(myBook.autor, "Mwimule Bienvenu");
	myBook.price = 44.44;
	
	
	printf("The book title is %s\n", myBook.title);
	printf("\nThe book author is %s\n", myBook.autor);
	printf("\nThe book price is %.2f", myBook.price);
}