//Chase Staples
//Main File for Manipultating String Vectors

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vector.h"
#include "shell.h"

int main(int argc, char * argv[]){
    stringVector shell;
    strvec_init(&shell);
    do {
        prompt();
        read_shell(&shell);
        exec_shell(&shell);
    } while (strcmp(strvec_get(shell, 0), "exit" != 0));
    strvec_free(&shell);
    return 0;
}