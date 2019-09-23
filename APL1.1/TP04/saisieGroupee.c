#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	int jourDD;
	int jourMM;
	int jourAA;

	int ageDD;
	int ageMM;
	int ageAA;

  printf("Date du jour:");
	scanf("%d/%d/%d", &jourDD,&jourMM,&jourAA);
	printf("Vote age: ");
  scanf("%d/%d/%d",&ageDD, &ageMM,&ageAA);
  
	int monAge = jourAA-ageAA;


		if (jourMM > ageMM){
		monAge = monAge + 1;
	}
	
	printf("vous avez %d ans\n",monAge);


return EXIT_SUCCESS;
}

