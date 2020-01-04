#include<stdio.h>
#include<stdlib.h>

#define COLONNES 5
#define LIGNES 2

int main(int argc, char * argv[]){


int a;
int b;
int c;
int t1[LIGNES][COLONNES];
srand(time(NULL));


FILE* flux;
flux = fopen("./t1.csv", "w");
if(feof (flux)){
	perror("Problème fopen\n");
	exit(1);
}

for(a=0;a<LIGNES;a++){
  for(b=0;b<COLONNES;b++){
	 t1[a][b] = b+1;
	 printf("%d",t1[a][b]);
	 fprintf(flux, "%d,",t1[a][b]);
	}
	fprintf(flux, "\n",t1[a][b]);
	printf("\n");
 }



return EXIT_SUCCESS;
}


