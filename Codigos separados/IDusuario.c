#include <stdio.h>
#include <stdlib.h>
#include <ctime>

int main(void){
	int usuario[1000];
	int i;
	
	srand(time(NULL));
	
	for(i=0; i<1; i++)
		usuario[i] = rand() % 1000;
	
	for(i=0; i<1; i++)
		printf("Usuario = %d", usuario[i]);		
	
return 0;
}
