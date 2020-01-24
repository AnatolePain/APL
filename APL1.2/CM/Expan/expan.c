#include<stdio.h>
#include<stdlib.h>


unsigned empan(unsigned char[][TAILLE]){

	unsigned count = 0;

	int i,j;

	for (i = 0; i < TAILLE; ++i){
		
		for (j = 0; j < TAILLE; ++j){
			
			if(char[i,j] == char[i][j+1] || char[i,j] == char[i+1][j]){
				count++;
			}

		}

	}

	return count;

}

/*int main(int argc, char * argv[]){

return EXIT_SUCCESS;
}*/

