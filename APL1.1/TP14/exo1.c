#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char * argv[]){
	
	int i;
	char tab[26];
	char mdp[26] = "Fontainebleau\n";
	printf("password: ");

	for(i=0;i<26 && tab[i] != '\n';i++){ /*faux car ne verifie pas la case contenat le \n */
		tab[i] = getchar();
	}

	if(strcmp(tab,mdp) == 0){
		printf("l'authentification a réussi\n");
	}else{
		printf("l'authentification a échoué\n");
	}

	return EXIT_SUCCESS;
}

