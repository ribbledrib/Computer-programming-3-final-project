#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE *fptr;

    fptr = fopen("data.txt", "r");

    if (fptr == NULL){
        printf("The file is not opened");
    }
    return 0;
}