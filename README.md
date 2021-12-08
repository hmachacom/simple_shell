 # Simple_shell.

## #AUTHORS.

### Hugo Machacon

------------
Git: https://github.com/hmachacom
Twitter: https://twitter.com/hmachacom
Linkedin: 

------------
### Carlos Pardo

------------
Git: https://github.com/ANDRES3021
Twitter: https://twitter.com/CarlosA54648157
Linkedin: https://www.linkedin.com/in/carlos-andres-pardo-rodriguez-8bbb90202/

------------


## SHELL Definition
Shell is a command-line interpreter that provides a command line user interface commonly for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts.

Users typically interact with a shell using a terminal emulator; however, direct operation via serial hardware connections or Secure Shell are common for server systems. All Unix shells provide filename wildcarding, piping, here documents, command substitution, variables and control structures for condition-testing and iteration.

The purpouse of this prroject is to Write a simple UNIX command interpreter.

------------



## About this Repo

### Requirements to built it:
* All your files will be compiled on Ubuntu 20.04 LTS.
* All your files should end with a new line.
* A README.md file, at the root of the folder of the project is mandatory.
* Your shell should not have any memory leaks
* No more than 5 functions per file
* All your header files should be include guarded

------------



## C Files:
| file  |Descriptions   |
| ------------ | ------------ |
|  prompt.c  |  this file contains the prompt and calls child process |
| hijo.c   | this file performs  tokenization and does not send the parameters to the exec function  |
| exec.c   | Look for the command in the path and execute it if this command exists  |
|  path.c |  this function looks for the path in the environ and returns it |
| searchDir  |   looks for the command in all the directories of the path  |
| shel.h   |   contains all libraries and prototypes of all functions |

------------

## How to use this project
1. Clone this repo into your sandbox or local terminal.
2. Access to the directory and compile all C files with the command: gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c - o hsh ( hsh is a suggested name, not mandatory)
3. In case you prefer to use the non-interactive mode with the Teletypewriter: write down your  instruction and pipeline the executable you create on the previous step.

## Examples:

------------

### ls :


------------

### /bin/ls:

------------

### pwd:

------------
## Special commands:

Ctrl + D : Exits Shell.

Ctrl + C : To prevent the shell from closing.

------------

## Flowchart

------------

