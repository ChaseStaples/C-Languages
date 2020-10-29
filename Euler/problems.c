//Chase Staples
//C File for Headers
//Implementing Functionality for Euler Problems

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <cpio.h>
#include "problems.h"
#include <time.h>

//Problem 3:
int largestPrimeFactor(long long number){
        clock_t start, end;
        double cpu_time_used;
        start = clock();
        long long prime = 2;
        while(number > prime){
                if(number % prime == 0){
                        number = number / prime;
                }
                else{
                        prime = prime + 1;
                }
        }
        end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("Problem 3: Took %f to execute \n", cpu_time_used);
        return prime;
}

//Problem 5: Creating smallest mulitples function
int smallestMultiples(int firstNumber, int secondNumber){
        int sm = firstNumber;
        // From 1 to 20 checking each number for smallest multiple
        // Until a number is found to be evenly divisible by 1-20
        for(int i = sm; i < secondNumber; i++){
                int sum = sm;
                //If number is still divisble add that number to sum
                while(sum % i != 0){
                        sum += sm;
                }
                sm = sum;
        }
        return sm;
}

//Problem 6
int sumSquareDifference(int number){
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 1; i < number + 1; i++){
                sum1 += i * i;
                sum2 += i;
        }
        sum2 = sum2 * sum2;
        int difference = sum2 - sum1;
        return difference;
}