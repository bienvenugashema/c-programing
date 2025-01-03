// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int a[2][2] = {{1,2},{3,4}}, i,j, sr, sc;
    for(i=0;i<2;i++){
        sr=0; sc=0;
        for(j=0;j<2;j++){
            sr = sr + a[i][j];
            sc= sc + a[j][i];
        }
        
        printf("\n The sum of rows is %d and sum of colums is %d", sr, sc);
    }

    return 0;
}
