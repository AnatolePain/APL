#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char * argv[]){

int i;
int a;
int tab[10];
int valMaxTab = 0;
int positionValMax;
srand(time(NULL));

for(a=0;a<10;a++){
  tab[a] = (rand()%100)-50;	
 }

for(a=0;a<10;a++){
  if(tab[a]>valMaxTab){
	valMaxTab = tab[a];
  positionValMax = a;
	} 
}

printf("%d\n",valMaxTab);
printf("%d\n",positionValMax);

printf("   ");
for(a=0;a<positionValMax;a++){
  printf("      ");
}
printf("|\n");

printf("   ");
for(a=0;a<positionValMax;a++){
  printf("      ");
}
printf("V\n");



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

