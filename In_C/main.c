#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Global Variables */
FILE *pfile = NULL;
char* file = "all_files/file1.txt"; 
/* Structure decleration */
/* Function Prototypes */

int main(){
    /* Initializing Global Variables */
    pfile = fopen(file,"w+");
    if (pfile == NULL){
        printf("Failed to Open or create %s\n", file);
    }else{
        fputs("Inputed a string here", pfile);
    }
    fclose(pfile);
    pfile = NULL;
    return 0;
}

/* unction Details */