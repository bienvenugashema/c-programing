#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "MWIMULE Bienvenu";
    int length = strlen(name);
    
    for(int i = length - 1; i >=0; --i){
        printf("%c", name[i]);
    }
}
