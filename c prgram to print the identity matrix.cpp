// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[3][3],i,j;
    
    for(i=0; i<3; i++){
        for(j=0;j<3;j++){
            if(i==j){
                printf("1\t");
            }else{
                printf("0\t");
            }
        }
        printf("\n");
    }

    return 0;
}
