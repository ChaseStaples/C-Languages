//Chase Staples
//Manipulating String Vectors
//Vector.c File

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vector.h"

void stringVector_init(stringVector * strlist){
	strlist -> arrayPointer = malloc(strlist -> capacity * sizeof(char*));
    strlist -> numOfElements = 0;
	strlist -> capacity = 4;
}

//Freeing Memory -- No Memory Leaks
void stringVector_free(stringVector * strlist){
	for(int i = 0; i < strlist -> numOfElements; i++)
	        free(strlist -> arrayPointer[i]);
	    free(strlist -> arrayPointer);
		strlist -> arrayPointer = NULL;
		strlist -> numOfElements = 0;
		strlist -> capacity = 0;
}

//Pushing or adding new char to string and allocating for more memory if too many elements
void stringVector_push(stringVector * strlist, const char* str){
	if(strlist -> numOfElements >= ((strlist -> capacity) - 1))
		strlist-> capacity = strlist -> capacity * 2;
		strlist -> arrayPointer = (char**)realloc(strlist -> arrayPointer, strlist -> capacity * sizeof(char*));
	strlist -> arrayPointer[strlist -> numOfElements] = malloc(strlen(str) * sizeof(char));
	strcpy(strlist -> arrayPointer[strlist -> numOfElements], str);
	strlist -> numOfElements++;
	strlist -> arrayPointer[strlist -> numOfElements] = NULL;
}

//Getting char from string vector
char* stringVector_get(const stringVector strlist, int idx){
	 if(idx < 0 || idx >= strlist.numOfElements)
        return NULL;
	char * ptr = strlist.arrayPointer[idx];
    return ptr;
}

//Return number of elements of string vector
int stringVector_size(const stringVector strlist){
	return strlist.numOfElements;
}

//Return capacity or amount the string vector can allocate for
int stringVector_capacity(const stringVector strlist){
	return strlist.capacity;
}