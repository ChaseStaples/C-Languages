//Chase Staples
//Shell C File

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "vector.h"
#include "shell.h"

//Display prompt
void prompt(){
        char * name = "Chase";
        printf("\033[1;33m");
        printf("%s $>", name);
        printf("\033[0m");
}
//Read line and store inputs
void read_cmd(stringVector * shell){
        char * buffer = calloc(256, sizeof(char*));
        size_t buffsize = 256;
        int read = getline(&buffer, &buffsize, stdin);
        strvec_free(shell);

        char * pointer = strtok(buffer, " \n");
        while (pointer)
        {
                strvec_push(shell, pointer);
                pointer = strtok(NULL, " \n");
        }
        free(buffer);
        return;
}
//Print out commands
void exec_cmd(const stringVector * shell){
    printf("\033[1;35m"); //Blue
    printf("CMD: ");
    printf("\033[0m");
    printf("\033[1;31m"); //Red
    printf("%s ", shell -> arrayPointer[0]);
    printf("\033[0m");
    printf("\033[1;35m"); //Blue
    printf("ARGS: ");
    printf("\033[0m");
        for(int i = 1; i < shell -> numOfElements; i++){
                printf("\033[1;31m");
                printf("%s, ", shell -> arrayPointer[i]);
                printf("\033[0m");
        }
        printf("\n");
}

