#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

int Un, Un_2, Un_1, input, i;

printf("Entrez n\n");
scanf("%d",&input);

for(i = 2; i < input; i++){

	printf("%d,%d,%d\n", Un, Un_1, Un_2);
	Un = Un_2 + Un_1;
	Un_2 = Un_1;
	Un_1 = Un;

}

printf("%d",Un);

return EXIT_SUCCESS;
}

