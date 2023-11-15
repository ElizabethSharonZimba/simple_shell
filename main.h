#ifndef MAIN_H
#define MAIN_H
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <limits.h>
#include <time.h>

extern char **environ;
char *append_command(char *dir_path, char *command);
int cmp_str(char *str1, char *str2);
int verify_path(char **arguments);
char *_strdup(char *str);
char *append_command(char *dir_path, char *command);
int execute(char **arguments);
int fill_args(char *entry, char **arguments);
int _numbers(int n);
int length_str(const char *string);
int _not_found(char **arguments, int counter);
char *_getval(char *global_var);
int _prompt(const char *prompt, unsigned int size);
int _putchar(char c);
int present(char *pathname);
void free_grid(char **grid, int heigth);
void last_free(char *entry);
int blt_verify(char **arguments, int exit_stat);

#endif
