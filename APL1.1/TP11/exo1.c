#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char * argv[]){

int i;
int a;
int tab[10];
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


return EXIT_SUCCESS;
}

