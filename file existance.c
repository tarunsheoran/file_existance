#include <stdio.h>

int main() {
    FILE *fptr;
    fptr=fopen("Test.txt","r");
    if(fptr==NULL){
        printf("File does not exist \n");
    }
    else{
    fclose(fptr);
    }
    return 0;
}