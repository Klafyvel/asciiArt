#Copyright (c) 2013, Hugo LEVY-FALK
#All rights reserved.
#
#Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
#
#1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
#
#2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
#
#THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

.PHONY: clean, mrproper, archive
.SUFFIXES:

#variables
CC = gcc
EXEC = asciiArt
DEBUG = no
ifeq ($(DEBUG),yes)
	CFLAGS = -Wall -Wextra -Wunreachable-code -Wwrite-strings -Wstrict-prototypes
else
	CFLAGS =
endif

#création de l'exécutable
all: main.o dictionnaire.o
	$(CC) $^ -o $(EXEC) $(CFLAGS)
	@echo "\033[31mMakefile: \033[32m \t> un exemple a été créé à partir du fichier à cet endroit : $(EXEC)\n\t\t> 'make mrproper' pour réinitialiser le répertoire. \033[0m \n"

main.o: dictionnaire.h

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

# clean
clean:
	rm -rf *.o

# mrproper
mrproper: clean
	rm -rf $(EXEC)

#création d'une archive
archive:
	mkdir Menu_API
	cp -r ./COPYING Menu_API
	cp -r ./doc Menu_API
	cp -r ./Makefile Menu_API
	cp -r ./README.md Menu_API
	cp -r ./src Menu_API
	tar -czvf Menu_API.tar.gz ./Menu_API
	rm -r Menu_API
