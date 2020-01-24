# TP 19 Exercice 1 : fichier Makefile

# CHAPITRE 1 : BUT FINAL

but : expan

# CHAPITRE 2 : VARIABLES

OFILES = expan.o\
		test_expan.o\

CC = gcc

CFLAGS = -Wall -ansi 

# CHAPITRE 3 : DEPENDANCES (REGLES IMPLICITES)

expan.o: expan.h

test_expan.o : test_expan.h expan.h

#CHAPITRE 4 : DEPENDANCES AVEC COMMANDES

expan : $(OFILES)
	$(CC) $(CFLAGS) -o expan $(OFILES)

#CHAPITRE 5 : NETTOYAGE DES FICHIERS GENERES

clean :
	-rm -f $(OFILES) expan

#CHAPITRE 6 : BUTS FACTICES

.PHONY : but clean
