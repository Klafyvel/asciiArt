#ifndef H_DICTIONNAIRE
#define H_DICTIONNAIRE

#include <string.h>
#include <stdio.h>

void DICTIONNAIRE_INIT();

struct s_dict {
	char car;
	char lettre[6][8]; 
};
struct s_dict DICTIONNAIRE[26];
#endif
