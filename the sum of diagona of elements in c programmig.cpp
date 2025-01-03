// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int a[2][2] = {{1,2},{2,4}}, i,j, sum=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(i!=j){
                sum = sum + a[i][j];
            }
           
        }
         
    }
printf("\nThe sum is %d", sum);
    return 0;
}
