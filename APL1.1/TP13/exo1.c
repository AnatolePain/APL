#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

	float a;
	double b;
	long double c;
	char d;
	short int e;
	int f;
	long long unsigned int g;

	printf("%p\n%p\n%p\n%p\n%p\n%p\n%p\n",&a,&b,&c,&d,&e,&f,&g);

	return EXIT_SUCCESS;
}

