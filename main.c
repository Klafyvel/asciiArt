#include <stdio.h>
#include "dictionnaire.h"

int main(int argc, char* argv[])
{
	
	dictionnaireInit();
	if(argc > 1)
		printAA(argv[1]);

	return 1;
}
