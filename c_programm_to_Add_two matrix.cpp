// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[2][3], b[2][3], c[2][3], i, j;
    //The ser inputs the values for first matrix
    printf("\nEnter the values for first matrix:\n ");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    // To print the first matrix
    
    printf("\nvalues for first matrix:");
    for(i = 0; i < 2; ++i){
        for(j = 0; j < 3; ++j){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\nEnter the values for Second matrix: ");
    for(i = 0; i < 2; ++i){
        for(j = 0; j < 3; ++j){
            scanf("%d", &b[i][j]);
        }
    }
    
    //To print the second Matrix
    printf("\nvalues for Second matrix: ");
    for(i = 0; i < 2; ++i){
        for(j = 0; j < 3; ++j){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    
   //to add those arrays
   
   for (i =0; i < 2; ++i){
       for(j = 0; j < 3; ++j){
           c[i][j] = a[i][j] + b[i][j];
           printf("%d\t", c[i][j]);
       }
       printf("\n");
   }

    return 0;
}
