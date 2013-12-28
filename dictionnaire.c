/*Copyright (c) 2013, Hugo LEVY-FALK
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#include "dictionnaire.h"

void dictionnaireInit()
{
	DICTIONNAIRE[0].car=32;
	strcpy(DICTIONNAIRE[0].lettre[0],"   ");
	strcpy(DICTIONNAIRE[0].lettre[1],"   ");
	strcpy(DICTIONNAIRE[0].lettre[2],"   ");
	strcpy(DICTIONNAIRE[0].lettre[3],"   ");
	strcpy(DICTIONNAIRE[0].lettre[4],"   ");
	strcpy(DICTIONNAIRE[0].lettre[5],"   ");

	DICTIONNAIRE[1].car='!';
	strcpy(DICTIONNAIRE[1].lettre[0]," _ ");
	strcpy(DICTIONNAIRE[1].lettre[1],"| |");
	strcpy(DICTIONNAIRE[1].lettre[2],"| |");
	strcpy(DICTIONNAIRE[1].lettre[3],"|_|");
	strcpy(DICTIONNAIRE[1].lettre[4]," _ ");
	strcpy(DICTIONNAIRE[1].lettre[5],"|_|");

	DICTIONNAIRE[2].car='0';
	strcpy(DICTIONNAIRE[2].lettre[0]," ______ ");
	strcpy(DICTIONNAIRE[2].lettre[1],"|  __  |");
	strcpy(DICTIONNAIRE[2].lettre[2],"| |  | |");
	strcpy(DICTIONNAIRE[2].lettre[3],"| |  | |");
	strcpy(DICTIONNAIRE[2].lettre[4],"| |__| |");
	strcpy(DICTIONNAIRE[2].lettre[5],"|______|");

	DICTIONNAIRE[3].car='1';
	strcpy(DICTIONNAIRE[3].lettre[0],"  ___   ");
	strcpy(DICTIONNAIRE[3].lettre[1]," /   |  ");
	strcpy(DICTIONNAIRE[3].lettre[2],"/_|  |  ");
	strcpy(DICTIONNAIRE[3].lettre[3],"  |  |  ");
	strcpy(DICTIONNAIRE[3].lettre[4]," _|  |_ ");
	strcpy(DICTIONNAIRE[3].lettre[5],"|______|");

	DICTIONNAIRE[4].car='2';
	strcpy(DICTIONNAIRE[4].lettre[0],"  ____  ");
	strcpy(DICTIONNAIRE[4].lettre[1]," /    \\ ");
	strcpy(DICTIONNAIRE[4].lettre[2],"|_ /  / ");
	strcpy(DICTIONNAIRE[4].lettre[3],"  /  /  ");
	strcpy(DICTIONNAIRE[4].lettre[4]," /  /__ ");
	strcpy(DICTIONNAIRE[4].lettre[5],"|______|");

	DICTIONNAIRE[5].car='3';
	strcpy(DICTIONNAIRE[5].lettre[0],"  ____  ");
	strcpy(DICTIONNAIRE[5].lettre[1]," /___ \\ ");
	strcpy(DICTIONNAIRE[5].lettre[2],"   __| |");
	strcpy(DICTIONNAIRE[5].lettre[3],"  |__  |");
	strcpy(DICTIONNAIRE[5].lettre[4]," ____/ |");
	strcpy(DICTIONNAIRE[5].lettre[5]," \\_____/");

	DICTIONNAIRE[6].car='4';
	strcpy(DICTIONNAIRE[6].lettre[0],"    __  ");
	strcpy(DICTIONNAIRE[6].lettre[1],"   / /  ");
	strcpy(DICTIONNAIRE[6].lettre[2],"  / /_  ");
	strcpy(DICTIONNAIRE[6].lettre[3]," / /| |_");
	strcpy(DICTIONNAIRE[6].lettre[4],"|___  _|");
	strcpy(DICTIONNAIRE[6].lettre[5],"    |_| ");

	DICTIONNAIRE[7].car='5';
	strcpy(DICTIONNAIRE[7].lettre[0]," ______ ");
	strcpy(DICTIONNAIRE[7].lettre[1],"|  ____|");
	strcpy(DICTIONNAIRE[7].lettre[2],"| |___  ");
	strcpy(DICTIONNAIRE[7].lettre[3],"|____ \\ ");
	strcpy(DICTIONNAIRE[7].lettre[4]," ____| |");
	strcpy(DICTIONNAIRE[7].lettre[5],"|______/");

	DICTIONNAIRE[8].car='6';
	strcpy(DICTIONNAIRE[8].lettre[0]," ______ ");
	strcpy(DICTIONNAIRE[8].lettre[1],"/  ____|");
	strcpy(DICTIONNAIRE[8].lettre[2],"| |___  ");
	strcpy(DICTIONNAIRE[8].lettre[3],"|  __ \\ ");
	strcpy(DICTIONNAIRE[8].lettre[4],"| |___| |");
	strcpy(DICTIONNAIRE[8].lettre[5],"|______/ ");
	
	DICTIONNAIRE[9].car='7';
	strcpy(DICTIONNAIRE[9].lettre[0]," ______ ");
	strcpy(DICTIONNAIRE[9].lettre[1],"|_____ |");
	strcpy(DICTIONNAIRE[9].lettre[2],"   __/ /");
	strcpy(DICTIONNAIRE[9].lettre[3],"  |_  _|");
	strcpy(DICTIONNAIRE[9].lettre[4],"   / /  ");
	strcpy(DICTIONNAIRE[9].lettre[5],"  /_/   ");

	DICTIONNAIRE[10].car='8';
	strcpy(DICTIONNAIRE[10].lettre[0],"  ____  ");
	strcpy(DICTIONNAIRE[10].lettre[1]," / -- \\ ");
	strcpy(DICTIONNAIRE[10].lettre[2],"| |__| |");
	strcpy(DICTIONNAIRE[10].lettre[3],"|  __  |");
	strcpy(DICTIONNAIRE[10].lettre[4],"| |__| |");
	strcpy(DICTIONNAIRE[10].lettre[5]," \\____/ ");

	DICTIONNAIRE[11].car='9';
	strcpy(DICTIONNAIRE[11].lettre[0],"  ____  ");
	strcpy(DICTIONNAIRE[11].lettre[1]," / -- \\ ");
	strcpy(DICTIONNAIRE[11].lettre[2],"| |__| |");
	strcpy(DICTIONNAIRE[11].lettre[3]," \\___  |");
	strcpy(DICTIONNAIRE[11].lettre[4],"  ___| |");
	strcpy(DICTIONNAIRE[11].lettre[5]," |_____|");

	DICTIONNAIRE[12].car='?';
	strcpy(DICTIONNAIRE[12].lettre[0],"  _____ ");
	strcpy(DICTIONNAIRE[12].lettre[1]," /___  \\");
	strcpy(DICTIONNAIRE[12].lettre[2],"     | |");
	strcpy(DICTIONNAIRE[12].lettre[3],"    / / ");
	strcpy(DICTIONNAIRE[12].lettre[4],"   |_|  ");
	strcpy(DICTIONNAIRE[12].lettre[5],"   [ ]  ");

	DICTIONNAIRE[13].car='<';
	strcpy(DICTIONNAIRE[13].lettre[0],"  __");
	strcpy(DICTIONNAIRE[13].lettre[1]," / /");
	strcpy(DICTIONNAIRE[13].lettre[2],"/ / ");
	strcpy(DICTIONNAIRE[13].lettre[3],"\\ \\ ");
	strcpy(DICTIONNAIRE[13].lettre[4]," \\_\\");
	strcpy(DICTIONNAIRE[13].lettre[5],"    "); 

	DICTIONNAIRE[14].car='A';
	strcpy(DICTIONNAIRE[14].lettre[0],"  ____  ");
	strcpy(DICTIONNAIRE[14].lettre[1]," / __ \\ ");
	strcpy(DICTIONNAIRE[14].lettre[2],"| |__| |");
	strcpy(DICTIONNAIRE[14].lettre[3],"|  __  |");
	strcpy(DICTIONNAIRE[14].lettre[4],"| |  | |");
	strcpy(DICTIONNAIRE[14].lettre[5],"|_|  |_|");

	DICTIONNAIRE[15].car='B';
	strcpy(DICTIONNAIRE[15].lettre[0]," _____  ");
	strcpy(DICTIONNAIRE[15].lettre[1],"|  _  \\ ");
	strcpy(DICTIONNAIRE[15].lettre[2],"| |_| / ");
	strcpy(DICTIONNAIRE[15].lettre[3],"|  __ \\ ");
	strcpy(DICTIONNAIRE[15].lettre[4],"| |__| |");
	strcpy(DICTIONNAIRE[15].lettre[5],"|_____/ ");

	DICTIONNAIRE[16].car='C';
	strcpy(DICTIONNAIRE[16].lettre[0],"  _____ ");
	strcpy(DICTIONNAIRE[16].lettre[1]," /  ___|");
	strcpy(DICTIONNAIRE[16].lettre[2],"|  /    ");
	strcpy(DICTIONNAIRE[16].lettre[3],"| |     ");
	strcpy(DICTIONNAIRE[16].lettre[4],"|  \\___ ");
	strcpy(DICTIONNAIRE[16].lettre[5]," \\_____|");

	DICTIONNAIRE[17].car='D';
	strcpy(DICTIONNAIRE[17].lettre[0]," ____   ");
	strcpy(DICTIONNAIRE[17].lettre[1],"|  _ \\  ");
	strcpy(DICTIONNAIRE[17].lettre[2],"| | \\ \\ ");
	strcpy(DICTIONNAIRE[17].lettre[3],"| |  | |");
	strcpy(DICTIONNAIRE[17].lettre[4],"| |_/ / ");
	strcpy(DICTIONNAIRE[17].lettre[5],"|___ /  ");

	DICTIONNAIRE[18].car='E';
	strcpy(DICTIONNAIRE[18].lettre[0]," ______ ");
	strcpy(DICTIONNAIRE[18].lettre[1],"|  ____|");
	strcpy(DICTIONNAIRE[18].lettre[2],"| |___  ");
	strcpy(DICTIONNAIRE[18].lettre[3],"|  ___| ");
	strcpy(DICTIONNAIRE[18].lettre[4],"| |____ ");
	strcpy(DICTIONNAIRE[18].lettre[5],"|______|");

	DICTIONNAIRE[19].car='F';
	strcpy(DICTIONNAIRE[19].lettre[0]," ______ ");
	strcpy(DICTIONNAIRE[19].lettre[1],"|  ____|");
	strcpy(DICTIONNAIRE[19].lettre[2],"| |___  ");
	strcpy(DICTIONNAIRE[19].lettre[3],"|  ___| ");
	strcpy(DICTIONNAIRE[19].lettre[4],"| |     ");
	strcpy(DICTIONNAIRE[19].lettre[5],"|_|     ");

	DICTIONNAIRE[20].car='G';
	strcpy(DICTIONNAIRE[20].lettre[0],"  _____ ");
	strcpy(DICTIONNAIRE[20].lettre[1]," /  ___|");
	strcpy(DICTIONNAIRE[20].lettre[2],"| / __  ");
	strcpy(DICTIONNAIRE[20].lettre[3],"| ||_ \\ ");
	strcpy(DICTIONNAIRE[20].lettre[4],"| \\__/ |");
	strcpy(DICTIONNAIRE[20].lettre[5]," \\____/ ");

	DICTIONNAIRE[21].car='H';
	strcpy(DICTIONNAIRE[21].lettre[0]," _    _ ");
	strcpy(DICTIONNAIRE[21].lettre[1],"| |  | |");
	strcpy(DICTIONNAIRE[21].lettre[2],"| |__| |");
	strcpy(DICTIONNAIRE[21].lettre[3],"|  __  |");
	strcpy(DICTIONNAIRE[21].lettre[4],"| |  | |");
	strcpy(DICTIONNAIRE[21].lettre[5],"|_|  |_|");

	DICTIONNAIRE[22].car='I';
	strcpy(DICTIONNAIRE[22].lettre[0]," ______ ");
	strcpy(DICTIONNAIRE[22].lettre[1],"|_    _|");
	strcpy(DICTIONNAIRE[22].lettre[2],"  |  |  ");
	strcpy(DICTIONNAIRE[22].lettre[3],"  |  |  ");
	strcpy(DICTIONNAIRE[22].lettre[4]," _|  |_ ");
	strcpy(DICTIONNAIRE[22].lettre[5],"|______|");

	DICTIONNAIRE[23].car='J';
	strcpy(DICTIONNAIRE[23].lettre[0]," ______ ");
	strcpy(DICTIONNAIRE[23].lettre[1],"|__   _|");
	strcpy(DICTIONNAIRE[23].lettre[2],"   | |  ");
	strcpy(DICTIONNAIRE[23].lettre[3],"   | |  ");
	strcpy(DICTIONNAIRE[23].lettre[4]," __/ /  ");
	strcpy(DICTIONNAIRE[23].lettre[5],"|___/   ");

	DICTIONNAIRE[24].car='K';
	strcpy(DICTIONNAIRE[24].lettre[0]," __   __");
	strcpy(DICTIONNAIRE[24].lettre[1],"|  | / /");
	strcpy(DICTIONNAIRE[24].lettre[2],"|  |/ / ");
	strcpy(DICTIONNAIRE[24].lettre[3],"|    |  ");
	strcpy(DICTIONNAIRE[24].lettre[4],"|  |\\ \\ ");
	strcpy(DICTIONNAIRE[24].lettre[5],"|__| \\_\\");

	DICTIONNAIRE[25].car='L';
	strcpy(DICTIONNAIRE[25].lettre[0]," _      ");
	strcpy(DICTIONNAIRE[25].lettre[1],"| |     ");
	strcpy(DICTIONNAIRE[25].lettre[2],"| |     ");
	strcpy(DICTIONNAIRE[25].lettre[3],"| |     ");
	strcpy(DICTIONNAIRE[25].lettre[4],"| |____ ");
	strcpy(DICTIONNAIRE[25].lettre[5],"|______|");

	DICTIONNAIRE[26].car='M';
	strcpy(DICTIONNAIRE[26].lettre[0]," _    _ ");
	strcpy(DICTIONNAIRE[26].lettre[1],"| \\  / |");
	strcpy(DICTIONNAIRE[26].lettre[2],"||\\\\//||");
	strcpy(DICTIONNAIRE[26].lettre[3],"|| \\/ ||");
	strcpy(DICTIONNAIRE[26].lettre[4],"||    ||");
	strcpy(DICTIONNAIRE[26].lettre[5],"||    ||");

	DICTIONNAIRE[27].car='N';
	strcpy(DICTIONNAIRE[27].lettre[0]," __   _ ");
	strcpy(DICTIONNAIRE[27].lettre[1],"|  \\ | |");
	strcpy(DICTIONNAIRE[27].lettre[2],"|   \\| |");
	strcpy(DICTIONNAIRE[27].lettre[3],"| |\\   |");
	strcpy(DICTIONNAIRE[27].lettre[4],"| | \\  |");
	strcpy(DICTIONNAIRE[27].lettre[5],"|_|  \\_|");

	DICTIONNAIRE[28].car='O';
	strcpy(DICTIONNAIRE[28].lettre[0],"  ____  ");
	strcpy(DICTIONNAIRE[28].lettre[1]," / __ \\ ");
	strcpy(DICTIONNAIRE[28].lettre[2],"| |  | |");
	strcpy(DICTIONNAIRE[28].lettre[3],"| |  | |");
	strcpy(DICTIONNAIRE[28].lettre[4],"| |__| |");
	strcpy(DICTIONNAIRE[28].lettre[5]," \\____/ ");

	DICTIONNAIRE[29].car='P';
	strcpy(DICTIONNAIRE[29].lettre[0]," _____  ");
	strcpy(DICTIONNAIRE[29].lettre[1],"|  __ \\ ");
	strcpy(DICTIONNAIRE[29].lettre[2],"| |__\\ |");
	strcpy(DICTIONNAIRE[29].lettre[3],"|  ___/ ");
	strcpy(DICTIONNAIRE[29].lettre[4],"| |     ");
	strcpy(DICTIONNAIRE[29].lettre[5],"|_|     ");

	DICTIONNAIRE[30].car='Q';
	strcpy(DICTIONNAIRE[30].lettre[0],"  ____  ");
	strcpy(DICTIONNAIRE[30].lettre[1]," / __ \\ ");
	strcpy(DICTIONNAIRE[30].lettre[2],"| |  | |");
	strcpy(DICTIONNAIRE[30].lettre[3],"| | _| |");
	strcpy(DICTIONNAIRE[30].lettre[4],"| |_\\ \\|");
	strcpy(DICTIONNAIRE[30].lettre[5]," \\___\\_\\");

	DICTIONNAIRE[31].car='R';
	strcpy(DICTIONNAIRE[31].lettre[0]," _____  ");
	strcpy(DICTIONNAIRE[31].lettre[1],"|  __ \\ ");
	strcpy(DICTIONNAIRE[31].lettre[2],"| |__\\ |");
	strcpy(DICTIONNAIRE[31].lettre[3],"|    _/ ");
	strcpy(DICTIONNAIRE[31].lettre[4],"| |\\ \\  ");
	strcpy(DICTIONNAIRE[31].lettre[5],"|_| \\_\\ ");

	DICTIONNAIRE[32].car='S';
	strcpy(DICTIONNAIRE[32].lettre[0],"  _____ ");
	strcpy(DICTIONNAIRE[32].lettre[1]," / ____|");
	strcpy(DICTIONNAIRE[32].lettre[2],"| |___  ");
	strcpy(DICTIONNAIRE[32].lettre[3]," \\___ \\ ");
	strcpy(DICTIONNAIRE[32].lettre[4]," ____| |");
	strcpy(DICTIONNAIRE[32].lettre[5],"|_____/ ");

	DICTIONNAIRE[33].car='T';
	strcpy(DICTIONNAIRE[33].lettre[0]," ______ ");
	strcpy(DICTIONNAIRE[33].lettre[1],"|_    _|");
	strcpy(DICTIONNAIRE[33].lettre[2],"  |  |  ");
	strcpy(DICTIONNAIRE[33].lettre[3],"  |  |  ");
	strcpy(DICTIONNAIRE[33].lettre[4],"  |  |  ");
	strcpy(DICTIONNAIRE[33].lettre[5],"  |__|  ");

	DICTIONNAIRE[34].car='U';
	strcpy(DICTIONNAIRE[34].lettre[0]," _    _ ");
	strcpy(DICTIONNAIRE[34].lettre[1],"| |  | |");
	strcpy(DICTIONNAIRE[34].lettre[2],"| |  | |");
	strcpy(DICTIONNAIRE[34].lettre[3],"| |  | |");
	strcpy(DICTIONNAIRE[34].lettre[4],"| |__| |");
	strcpy(DICTIONNAIRE[34].lettre[5]," \\____/ ");

	DICTIONNAIRE[35].car='V';
	strcpy(DICTIONNAIRE[35].lettre[0]," _    _ ");
	strcpy(DICTIONNAIRE[35].lettre[1],"| |  | |");
	strcpy(DICTIONNAIRE[35].lettre[2],"| |  | |");
	strcpy(DICTIONNAIRE[35].lettre[3]," \\ \\/ / ");
	strcpy(DICTIONNAIRE[35].lettre[4],"  \\  /  ");
	strcpy(DICTIONNAIRE[35].lettre[5],"   \\/   ");

	DICTIONNAIRE[36].car='W';
	strcpy(DICTIONNAIRE[36].lettre[0],"        ");
	strcpy(DICTIONNAIRE[36].lettre[1],"||    ||");
	strcpy(DICTIONNAIRE[36].lettre[2],"||    ||");
	strcpy(DICTIONNAIRE[36].lettre[3],"|| /\\ ||");
	strcpy(DICTIONNAIRE[36].lettre[4],"||//\\\\||");
	strcpy(DICTIONNAIRE[36].lettre[5],"|_/  \\_|");

	DICTIONNAIRE[37].car='X';
	strcpy(DICTIONNAIRE[37].lettre[0]," _    _ ");
	strcpy(DICTIONNAIRE[37].lettre[1],"| |  | |");
	strcpy(DICTIONNAIRE[37].lettre[2]," \\ \\/ / ");
	strcpy(DICTIONNAIRE[37].lettre[3],"  \\  /  ");
	strcpy(DICTIONNAIRE[37].lettre[4]," / /\\ \\ ");
	strcpy(DICTIONNAIRE[37].lettre[5],"|_|  |_|");

	DICTIONNAIRE[38].car='Y';
	strcpy(DICTIONNAIRE[38].lettre[0],"__   __ ");
	strcpy(DICTIONNAIRE[38].lettre[1],"\\ \\ / / ");
	strcpy(DICTIONNAIRE[38].lettre[2]," \\ v /  ");
	strcpy(DICTIONNAIRE[38].lettre[3],"  | |   ");
	strcpy(DICTIONNAIRE[38].lettre[4],"  | |   ");
	strcpy(DICTIONNAIRE[38].lettre[5],"  |_|   ");

	DICTIONNAIRE[39].car='Z';
	strcpy(DICTIONNAIRE[39].lettre[0]," ______ ");
	strcpy(DICTIONNAIRE[39].lettre[1],"|____  |");
	strcpy(DICTIONNAIRE[39].lettre[2],"    / / ");
	strcpy(DICTIONNAIRE[39].lettre[3],"   / /  ");
	strcpy(DICTIONNAIRE[39].lettre[4]," _/ /__ ");
	strcpy(DICTIONNAIRE[39].lettre[5],"|______|");

}

struct s_dict* foundALetter(char letter)
{
	if((letter<'a' || letter>'z')&&(letter<'A' || letter>'Z')&&(letter<32 || letter>33)&&(letter<'0' || letter>'9')&&(letter!='<' || letter!='?'))
		return NULL;

	int id = 0;
	int ifin = 40; // indice de début et de fin

	struct s_dict* ptr = NULL; // le pointeur de retour
	do
	{
		int milieu=(id + ifin)/2;

		ptr = &DICTIONNAIRE[milieu];

		if((ptr->car)<letter) {
			id = milieu;
		}
		else if(letter<(ptr->car)){
			ifin = milieu;
		}
	}while(ptr->car != letter); // tant qu'on a pas trouvé...

	return ptr;
}


int printAA(char chaine[])
{
	int i, j, k;

	for(i=0; i<strlen(chaine); i++)
	{
		if(chaine[i]>='a' && chaine[i]<='z')
			chaine[i]-= 32;
	}
	int size = strlen(chaine); // on prépare la chaine d'entrée

	struct s_dict* asciiArt;


	for(j=0; j<6; j++)
	{
		for(i=0; i<size; i++)
		{
			if((chaine[i]>='A' && chaine[i]<='Z')||(chaine[i]>=32 && chaine[i]<=33)||(chaine[i]>='0' && chaine[i]<='9')||(chaine[i]=='<' || chaine[i]=='?'))
			{
				asciiArt = foundALetter(chaine[i]);
//			printf("%s", asciiArt->lettre[j]);
				for(k=0; k<8; k++)
				{
					putchar(asciiArt->lettre[j][k]);
				}
			}
			else
				printf("%c", chaine[i]);
		}
		printf("\n");
	}

	return 1;
}
