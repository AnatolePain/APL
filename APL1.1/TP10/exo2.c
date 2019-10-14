#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

printf("%d\n", +1./0);
printf("%d\n", -1/0);
printf("%d\n", -0/0);

return EXIT_SUCCESS;
}

