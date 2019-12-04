#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

	FILE * f= fopen("./top10","a");

	typedef struct  point{
	 	int scores;
	 	char sigles[3];
	}point;

	point a;

	printf("Entrez votre score, votre sigle\n");
	scanf("%d, %c"a.scores,a.sigles);



	return EXIT_SUCCESS;
}

