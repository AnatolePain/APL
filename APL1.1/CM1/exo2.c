#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

	char         a = '9';
	long int     b = 9L;
	long double  c = 9.0L;
	unsigned int d = 0x9;

	printf("%c\n", a);
	printf("%ld\n",b);
	printf("%.0Lf\n",c);
	printf("%u\n", d);

	return EXIT_SUCCESS;
}

