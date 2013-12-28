#ifndef H_DICTIONNAIRE
#define H_DICTIONNAIRE

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void dictionnaireInit(void);
int printAA(char chaine[]);
struct s_dict* foundALetter(char letter);

struct s_dict {
	char car;
	char lettre[6][8]; 
};
struct s_dict DICTIONNAIRE[40];
#endif
