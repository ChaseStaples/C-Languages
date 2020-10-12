//Chase Staples
//Manipulating String Vectors
//.h File

#ifndef strvec_h
#define strevec_h

typedef struct{
	char ** arrayPointer;
	int capacity;
	int numOfElements;

} stringVector;

void stringVector_init(stringVector * strlist);
void stringVector_free(stringVector * strlist);
void stringVector_push(stringVector * strlist, const char* str);
char* stringVector_get(const stringVector strlist, int idx);
int stringVector_size(const stringVector strlist);
int stringVector_capacity(const stringVector strlist);

#endif