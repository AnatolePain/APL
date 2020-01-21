#include<stdio.h>
#include<stdlib.h>
#include <math.h>

void exemple(unsigned n) {
  if (n != 0) {
    putchar('>');
    exemple(n-1);
    putchar('<');
  } else
    putchar('O');
}

int main(int argc, char * argv[]){

unsigned n = 10;
exemple(n);

return EXIT_SUCCESS;

}

/*	gcc -Wall -g exo1.c -o prog.out
	run prog.out
	break 7
	break 9
	break 11

	run

	bt
	c 

	bt
	c

	bt
	c

	.
	.
	.
	.

*/

	
