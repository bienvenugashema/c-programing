#include <stdio.h>

int main() {
	int a[2][2] = {{1,2}, {3,4}},
		b[2][2] = {{5,6},{7,8}},
		c[2][2],
		i,j,k, sum = 0;
		
	printf("The first matrix is: \n");
	
	for( i =0 ;i < 2; i++){
		for(j=0; j < 2; j++){
			
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}	
	
	printf("\n The second matrix is: \n");
	
	for(i=0; i< 2; i++){
		for(j=0; j<2; j++){
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	
	printf("The maltiplication of the two matrixes are: \n");
	
	for(i =0; i<2; i++){
		for(j=0; j<2; j++){
			for(k=0; k<2; k++){
				sum = sum + a[i][k] * b[k][j];
				c[i][j] = sum;
			}
			sum = 0;
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}
