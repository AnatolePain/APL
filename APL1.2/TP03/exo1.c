#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

	 int i;
	 FILE* flux;
	 flux = fopen("./top10", "r");

	 /*Dans top10 il y'a |int sur 4 octets|3 char(octet)|*/
	 					 |   |    |   |   |    |    |   |

	 typedef struct  point{
	 	int scores;
	 	char sigles[4]; /*car sigle est composé de 3 charactère(octets)
								et de d'un charactère(octet) vide*/
	 }point;

	 point q[10];

	 for(i=0;i<10;i++){

	 fread(&q[i].scores,sizeof(int),1,flux); /*lis les les 4 premier octet 
													car int =4octets*/
	 printf("Scores: %lu\n", q[i].scores);

	 fread(q[i].sigles,sizeof(char),3,flux);/*lis les les 3 vharactère(octet) 
												suivant	car int = 4octets*/
	 q[i].sigles[3]=0;
	 printf("sigles: %s\n", q[i].sigles);

	 }


	 fclose(flux);
	 


return EXIT_SUCCESS;
}

