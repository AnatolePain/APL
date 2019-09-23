#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
  setbuf(stdout, NULL);

  int jourDD;
  int jourMM;
  int jourAA;

  int ageDD;
  int ageMM;
  int ageAA;

  printf("Date du jour:");
  scanf("%d/%d/%d", &jourDD,&jourMM,&jourAA);
  printf("Date de naissance: ");
  scanf("%d/%d/%d",&ageDD, &ageMM,&ageAA);
  
  int monAge = jourAA-ageAA;
  
  if(jourAA < ageDD){
   monAge = (100 - ageAA) + jourAA;
  }

  if ((jourMM < ageMM) || (jourMM == ageMM && jourDD < ageDD)){
    monAge = monAge - 1;
  }
    
	
  printf("vous avez %d ans\n",monAge);


return EXIT_SUCCESS;
}

