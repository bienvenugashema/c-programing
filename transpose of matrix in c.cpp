// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int a[2][2] = {{1,2},{3,4}}, i,j;
    
    //To print the initial matrix
    for(i = 0; i< 2; i++){
        for(j=0;j<2;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The transposed matrix\n");
    for(i = 0; i< 2; i++){
        for(j=0;j<2;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
