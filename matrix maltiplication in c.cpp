// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int a[3][3] = {{1,2,3},{1,2,3},{1,2,3}},
        b[2][3] = {{1,2,3},{4,5,6}}, c[3][2], i,j,k, sum=0;
        
        // Making multiplication
        
        for(i=0; i< 3; i++){//Loop for first array a
            for(j = 0; j < 2; j++){ // Loop for second array b
                for( k =0; k < 3; k++){
                    sum = sum + a[i][k] * b[k][j];
                    c[i][j] = sum;
                }
                sum = 0;
                 printf("%d\t", c[i][j]);
                
            }
            printf("\n");
        }
        
       

    return 0;
}
