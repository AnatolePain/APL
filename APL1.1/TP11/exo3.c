#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char * argv[]){

int i;
int a;
int tab[10];
int valTab;
int valTabMin = 0;
int indiceTab = -1;
int b;
srand(time(NULL));

for(a=0;a<10;a++){
  tab[a] = (rand()%100)-50;	
 }


for(a=0;a<10;a++){
  printf("+-----");
}
printf("+\n");

for(a=0;a<10;a++){
  printf("|%4d ",tab[a]);
}
printf("|\n");

for(a=0;a<10;a++){
  printf("+-----");
}
printf("+\n");


printf("Entrez une valeur du tableau: ");
scanf("%d",&valTab);

for(a=0;a<10;a++){
 if(valTab == tab[a] && b!=1){
 indiceTab = a;
 b = 1;
 }
}

printf("%d\n",indiceTab);

return EXIT_SUCCESS;
}

