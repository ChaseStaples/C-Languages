//Chase Staples
//.c file for builtins

#include <stdio.h>
#include "vector.h"
#include "builtins.h"
#include "shell.h"
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>
#include <errno.h>

//Built in function for cd
void _cd(const stringVector * cmd){
        if(cmd -> numOfElements >= 3){
                printf("Error: cd has too many arguments\n");
        }
        else if(cmd -> numOfElements == 1){
                chdir(getenv("HOME"));
        }
        else {
                if(chdir(strvec_get(*cmd, 1)) == -1){
                        perror("cd");
                }
        }
}


const char* BUILTINS[] = {"cd", NULL};
void (*FCNS[])(const stringVector * cmd) = {_cd, NULL};