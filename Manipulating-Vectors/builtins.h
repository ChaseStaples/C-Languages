//Chase Staples
//OS Fall 2020
//Header File for Builtins

#ifndef builtins_h
#define builtins_h

void _cd(const stringVector * cmd);
extern const char* BUILTINS[];
extern void (*FCNS[])(const stringVector * cmd);

#endif