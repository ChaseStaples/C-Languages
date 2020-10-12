//Chase Staples
//Shell header file

#ifndef shell_h
#define shell_h

void prompt();
void read_cmd(stringVector * shell);
void exec_cmd(const stringVector * shell);

#endif