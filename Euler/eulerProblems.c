//Chase Staples
//Main File
//Euler problems to be solved below

#include <stdio.h>
#include <string.h>
#include <problems.h>


void green () {
  printf("\033[1;32m");
}

void yellow () {
  printf("\033[1;33m");
}

void blue () {
  printf("\033[1;34m");
}
void reset () {
  printf("\033[0m");
}

int main(int argc, char *argv[]){
        yellow();
        printf("The file to be compiled is: ");
        green();
        printf(argv[0]);
        reset();
        if(strcmp(argv[0], "./p003") == 0){
                //Print out largest prime factor of 600851475143
                blue();   printf("\nP003: ");
                yellow(); printf("The largest prime factor of 600851475143 is: ");
                green();  printf("%d\n", largestPrimeFactor(600851475143));
                reset();
        }
        else if(strcmp(argv[0], "./p005") == 0){
                //Printing out smallest multipes from 1-20
                blue();   printf("\nP005: ");
                yellow(); printf("The smallest mulitple from 1 - 20 is: ");
                green();  printf("%d\n", smallestMultiples(1,20));
                reset();
        }
        else if(strcmp(argv[0], "./p006") == 0){
                //Print out difference of sum of the squares problem
                blue();   printf("\nP006: ");
                yellow(); printf("The difference between sum of the squares to 100 is: ");
                green();  printf("%d\n", sumSquareDifference(100));
                reset();
        }
        return 0;
}