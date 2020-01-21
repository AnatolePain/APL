#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

int n, i;
double a,b,c;

c=0;
b=1;

printf("Entrez N\n");
scanf("%d",&n);

if(n==0 || n==1){
	printf("n= %d\n", n);
}else{
	for(i=2;i<=n;i++){
		a = b + c;
		c = b;
		b = a;
	}
}

printf("U = %lf\n", a);


return EXIT_SUCCESS;
}

