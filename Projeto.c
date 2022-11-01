#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctime>
#include <time.h>

int main(){
	char nome[50][1000];
	char endereco[50][1000];
	char sexo[10][1000];
	char email[50][1000];
	double altura[1000];
	int i, loop = 1;
	int vacina[1000];
	
	printf("<<<====================<<|      BEM VINDO      |>>====================>>>\n");
	printf("<<<====================<<| CADASTRO DE USUARIO |>>====================>>>\n\n");
	
	srand(time(NULL));
	
	for(i=0; i<1000; i++){
		printf("Digite o nome completo: ");
		fgets(nome[i], 50, stdin);
	
		printf("Digite o endereco do usuario: ");
        	fgets(endereco[i], 50, stdin);
	
		printf("Digite o sexo do usuario:\n[M]asculino\t[F]eminino\t[ND]nao declarar:   ");
        	scanf("%s", &sexo[i]);
        	
		if(strcmp(sexo[i], "M") == 0 || (strcmp(sexo[i], "F") == 0) || (strcmp(sexo[i], "ND") == 0)) 
       		{
            		loop = 1;
        	}
        	else{
            		printf("Sexo %s Invalido\n", sexo[i]);
           	 	break;
       		}
	
		printf("Digite a altura do usuario: ");
        	scanf("%lf", &altura[i]);
        	
		if(altura[i] < 1 || altura[i] > 2){
            		printf("Altura invalida\n");
       		}
	
		printf("Se vacinou?\n[S]im\t[N]ao:   ");    //AJUSTE BOOLEAN
		fflush(stdin);
		scanf("%d", &vacina[i]);
	
		printf("ID do usuario: %d\n", rand() % 1000);
		
		printf("Informe o email: ");
	 	fflush(stdin);
	 	fgets(email[i],50,stdin);
			
		printf("%s", email[i]);
		
		if(strchr(email[i], '@') == 0){
			printf("Email invalido!\n");
			printf("Informe o email novamente: ");
	 		fflush(stdin);
	 		fgets(email[i],50,stdin);
	 		printf("ERROR!");
			break;
		}
		else{
			printf("Email valido!\n");
		}
	}   
}
