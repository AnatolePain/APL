#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define COLONNES 5
#define LIGNES 2

int main(int argc, char * argv[]){

int a;
int b;
int c;
int t1[LIGNES][COLONNES];
/*srand(time(NULL));*/

for(a=0;a<LIGNES;a++){
  for(b=0;b<COLONNES;b++){
	 t1[a][b] = b+1;
	 printf("%d",t1[a][b]);
	}
	printf("\n");
 }
  printf("\n");


for(a=0;a<COLONNES;a++){
  printf("+-----");
}
printf("+\n");


for(a=0;a<LIGNES;a++){
  for(b=0;b<COLONNES;b++){
	 printf("|%4d ", t1[a][b]);
	}
  printf("|\n");
  
	for(c=0;c<COLONNES;c++){
	 printf("+-----");
  }
   printf("+\n");
}

return EXIT_SUCCESS;
}

