#include<stdio.h>
#include<stdlib.h>
#include <string.h>


char* inverse(const char* s){


	int i;int j;int k;
	char *cTab = NULL;
	char *cTabInv = NULL;


	cTab = (char*)malloc(strlen(s)*sizeof(char));
	cTabInv = (char*)malloc(strlen(s)*sizeof(char));

	cTab = *s;

	for(k = 0, j = strlen(s)-1 ; k < strlen(s) ; k++,j--){
		cTabInv[k]=cTab[j];
	}
 
 	return &cTabInv;

}	


int main(int argc, char * argv[]){

	/*int i;int j;int k;
	char *cTab = NULL;
	char *cTabInv = NULL;



	for(i = 0; i < argc -1 ; i++){

		cTab = (char*)malloc(strlen(argv[i+1])*sizeof(char));
		cTabInv = (char*)malloc(strlen(argv[i+1])*sizeof(char));

		cTab = argv[i+1];

		for(k = 0, j = strlen(argv[i+1])-1 ; k < strlen(argv[i+1]) ; k++,j--){
			cTabInv[k]=cTab[j];
		}
 
 		printf("%s\n",cTabInv);

	}*/
	for(i = 0; i < argc -1 ; i++){

		if( argv[i+1] == inverse(&argv[i+1]) ){
			printf("%s est un palindrome,\n",argv[i+1] );
		}

	}














	return EXIT_SUCCESS;
}

