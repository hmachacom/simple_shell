#ifndef SHELL_H
#define SHELL_H
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
extern char **environ;
char *_strtock(char *buffer, const char *separador);
int _excev(char **tokens, char *dir);
char *_strcat(char *dest, char *src);
int hijo(char *buffer, const char *separador, char **tokens);
int searchPath(char **path);
char *searchDir(char **path, char **tokens);
void freespp(char **freess);
void frees(char *);
void inicializar(char **tokes, int size);
void initializerArryPointer(char **);
void end(char **, char*, char **);
void callfork(char **path, char *dir, char **tokens, pid_t id);
#endif
