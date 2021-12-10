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
int _excev(char tokens[1024][1024], char *dir);
char *_strcat(char *dest, char *src);
int hijo(char *buffer, const char *separador, char tokens[1024][1024]);
int searchPath(char path[1024]);
int searchDir(char path[1024], char tokens[10241][1024], char dir[1024]);
void freespp(char **freess);
void frees(char *);
void inicializar(char **tokes, int size);
void initializerArryPointer(char **);
void end(char **, char*, char **);
int callfork(char *dir, char tokens[1024][1024], pid_t id);
void initializerArry(char arr[1024][1024]);
int shel2(char *path, char tok[10254][1024], char *di, char *av, pid_t id);
void ctrolmasc(int charter __attribute__((unused)));
size_t _getline(char **buffer, size_t *u);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
#endif
