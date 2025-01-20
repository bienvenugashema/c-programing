//c programmed find the largest number in an array using pointer.
#include <stdio.h>
int main() {
	int arr[5] = {34,12,21,54,48};
	int largest = *arr;
	
	for (int i = 0; i < 5; i++){
		if(largest < *(arr + i)){
			largest = *(arr + i);
		}
	}
	
	printf("The largest is %d",largest);
}
