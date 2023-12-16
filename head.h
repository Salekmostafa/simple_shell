#ifndef HEAD_H
#define HEAD_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

#define TOKEN_DELIMITER " \t\n"

extern char **environ;
int main(int argc, char **argv);
extern char **s_env;
void f_2d_array(char ***arr);
char *r_input(void);
char **t_input(char *input);
char *s_duplicate(const char *str);
int s_compare(const char *s1, const char *s2);
int s_length(const char *s);
char *s_concatenate(char *dest, const char *src);
char *s_copy(char *dest, const char *src);
int e_command(char **command, char **argv);
char *get_environment_variable(char *variable);

#endif
