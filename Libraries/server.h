#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

extern void Menu(char* filename, FILE* f_in, FILE* f_out);

int sock = 0;