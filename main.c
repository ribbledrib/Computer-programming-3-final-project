#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* open_file(){
    FILE *fptr;


    fptr = fopen("data.txt", "r");
    
    
    char temp[255];
    if (fptr == NULL){
        printf("The file is not opened\n");
    }
    else{
        printf("The file was opened successfuly\n");
    }
    fclose(fptr);
   char *buffer = malloc(strlen(temp) + 1);
   if(buffer == NULL){
    return NULL;
   }
   strcpy(buffer, temp);
   return buffer;
}
int main(){

    char *data = open_file();
    if(data != NULL){
        printf("%s\n", data);
        free(data);
    }
    

}
