#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE *fptr;

    fptr = fopen("data.txt", "r");

    if (fptr == NULL){
        printf("The file is1111111 not opened\n");
    }
    else{
        printf("The file was opened successfuly\n");
    }
    return 0;
}
