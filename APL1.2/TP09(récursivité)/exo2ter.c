#include<stdio.h>
#include<stdlib.h>


int Fibonacci(int n){

	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return(Fibonacci(n-1)+Fibonacci(n-2));
	}
	
}

void affiche_F(int m, int i){
	if (i<m){
		printf("U_%d=/n",i,Fibonacci(i));
		affiche_F(m,i+1);
	}
}

int main(int argc, char * argv[]){
	int n,m;
	printf("Entrez N\n");
	scanf("%d ",&n);
	printf("U_%d=/n",n,Fibonacci(n));
	scanf("%d ",&m);
	affiche_F(m,0);
}

