/*Descricao do Projeto 01:

Utilizando os conceitos de vetor, implemente um algoritmo que:

inclua ate1000 usuarios;  CHECK
edite um usuario;     CHECK
exclua um usuario;    --
busque um usuario pelo email;  --
imprima todos os usuarios cadastrados; CHECK
faca backup dos usuarios cadastrados;  CHECK
faca restauraco dos dados;   --
--------------------------------------------------------------
Dados do usuario:
Id (int) => preenchido automaticamente por numeros randomicos  CHECK
Nome completo (string)  CHECK
Email (string) => validacao do campo: verificar se o caractere "@" aparece  CHECK
Sexo (string) => validaco do campo: aceitar somente as palavras Feminino, Masculino e Nao declarar  CHECK
Endereco (string)  CHECK
Altura (double) => validaco do campo: aceitar valores entre 1 e 2 m.  CHECK
Vacina (tomou a vacina? boolean)   CHECK +/-
*/
#include <stdio.h>
#include <stdlib.h>    
#include <string.h>
#include <time.h> 
#include <stdbool.h>

int main(){                                                   
  int editar = 0, opcao = 0, tempo = time(0);
  int i, j, index;
  i = 0;
  char nome[1000][50], email[1000][50], sexo[1000][15], endereco[1000][50], vacina[1000];
  char nomebkp[1000][50], emailbkp[1000][50], sexobkp[1000][15], enderecobkp[1000][50], vacinabkp[1000];
  double altura[1000],alturabkp[1000];
  char email_busca[30];                     
 	
	srand(tempo);
    
	printf("<<<=====================<<|----------| BEM VINDO |---------|>>====================>>>\n\n");
	
    	while(opcao != 7){
    		
//Menu
	printf("<<<=====================<<|----------|   MENU    |---------|>>====================>>>\n\n");
	printf("[1] Cadastrar usuario\n");
	printf("[2] Editar usuario\n");
	printf("[3] Excluir usuario\n");
	printf("[4] Buscar usuario via E-mail\n");
	printf("[5] Imprimir os usuarios cadastrados\n");
	printf("[6] Fazer o backup dos usuarios cadastrados\n");
	printf("[7] Fazer a restauracao dos dados\n");
	printf("\nInsira uma opcao: ");
	fflush(stdin);
	scanf("%d", &opcao);

        switch (opcao){
//CASE 1
        case 1:
		for(i = 0; i < 1000; i++){
	
		printf("\n<<<=====================<<|      CADASTRO DE USUARIO       |>>====================>>>\n\n");
                                            
                //NOME
                printf("Digite o nome completo: ");                   
                fflush(stdin);
                fgets(nome[i],50,stdin);
                
                //EMAIL
                printf("Informe o email: ");
                fflush(stdin);
                fgets(email[i],50,stdin);
                    
                if(strchr(email[i], '@') == 0){
                    printf("Email invalido\n");
                    
                	printf("Me forneca o email:");
                   	fflush(stdin);
                   	fgets(email[i],50,stdin);
                }
                else{
			printf("Email valido!\n");      
		}
				
		//ENDERECO
                printf("Digite o endereco do usuario: ");
                fflush(stdin);
                fgets(endereco[i],50,stdin);
                
              	//Sexo
		printf("Digite o sexo do usuario:\n[M]asculino\t[F]eminino\t[ND]nao declarar:  ");
        	scanf("%s", &sexo[i]);
			
		if(strcmp(sexo[i], "M") == 0 || (strcmp(sexo[i], "F") == 0) || (strcmp(sexo[i], "ND") == 0)){
        	}
        	else{
            		printf("Sexo %s Invalido\n", sexo[i]);
            		printf("Digite o sexo do usuario:\n[M]asculino\t[F]eminino\t[ND]nao declarar:  ");
        		scanf("%s", &sexo[i]);
		}

		//VACINA
               	printf("Se vacinou?\n[S]IM | [N]AO:   ");
                fflush(stdin);
                scanf("%c", &vacina[i]);
                     
		//Altura
		printf("Digite a altura do usuario: ");
        	scanf("%lf", &altura[i]);
        	
		if(altura[i] < 1 || altura[i] > 2){
            		printf("Altura invalida\n");
            		printf("Digite a altura do usuario: ");
        		scanf("%lf", &altura[i]);
        	}
                
int continua;	
                printf("\nCadastrar outro usuario [0]NAO [1]SIM:  ");
                fflush(stdin);
                scanf("%d", &continua);
                
                if(continua == 0){
                   printf(">>> OK <<<");    
                    break;
                }

                
            }
            
            	
//Cadastro concluido
	printf("\n<<<====================<<| CADASTRO CONCLUIDO COM SUCESSO! |>>====================>>>\n\n");
	printf("                                 ID do usuario: %d\n", rand() % 1000);
	printf("Nome: %s", nome[i]);
	printf("E-mail: %s", email[i]);
	printf("Endereco: %s", endereco[i]);
	printf("Sexo: %s\n", sexo[i]);
	printf("Vacina: %c\n", vacina[i]);  
	printf("Altura: %.2lf\n\n", altura[i]);    
    	break;
//FINAL CASE 1

        case 2:
            //edite um usuario
            printf("\n<<<====================<<|        | EDICAO DE USUARIO |     |>>====================>>>\n\n", opcao);
                                                        
                printf("Digite o ID para edita-lo: ");
				fflush(stdin);
				scanf("%d", &index); 

				printf("Escolha uma opcao: \n[1]Nome\n[2]Email\n[3]Endereco\n[4]Sexo\n[5]Vacina\n[6]Altura\n\nDigite o numero: ");
				fflush(stdin);
				scanf("%d", &editar);

				switch (editar){
					case 1:
						printf("Informe o nome: ");
						fflush(stdin);
						fgets(nome[index], 50,stdin);
				
						break;
					
					case 2:
						printf("Informe o email: ");
						fflush(stdin);
						fgets(email[index], 50,stdin);
							
						printf("\n%s", email[i]);
						
						if(strchr(email[index], '@') == 0){
							printf("Email invalido\n");
							
						printf("Informe o email: ");
						fflush(stdin);
						fgets(email[index], 50,stdin);						
						}
						break;
						
					case 3:
						printf("Digite o sexo do usuario:\n[M]asculino\t[F]eminino\t[ND]nao declarar:  ");
        					scanf("%s", &sexo[i]);
						
						if(strcmp(sexo[i], "M") == 0 || (strcmp(sexo[i], "F") == 0) || (strcmp(sexo[i], "ND") == 0)) {
        				}
        				
						else{
            					printf("Sexo %s Invalido\n", sexo[i]);
            					printf("Digite o sexo do usuario:\n[M]asculino\t[F]eminino\t[ND]nao declarar:  \n");
        					scanf("%s", &sexo[i]);
						}
						break;
					
					case 4:
						printf("Informe o endereco: ");
						fflush(stdin);
						fgets(endereco[index], 50,stdin);
						break;
					
					case 5:
						printf("Se vacinou?\n[S]IM | [N]AO:   ");
                				fflush(stdin);
                				scanf("%c", &vacina[i]);
					break;

					case 6:
						//ALTURA
						printf("Informe a altura: ");
						fflush(stdin);
						scanf("%lf", &altura[i]);
						
						if(altura[i] < 1.00 || altura[i] > 2.00){
							printf("Altura invalida\n"); 		
							
							printf("Informe a altura: ");
							fflush(stdin);
							scanf("%lf", &altura[i]);
						}
						break;

						default:
						printf("\nOpcao invalida\n");
						break;
				} 
        
            break;
//fim do case 2

        case 3:
            printf("\n<<<====================<<|        | EXCLUIR USUARIO |      |>>====================>>>\n\n", opcao);

           
//fim do case 3

        case 4:
            //buscar um usuario via email
            printf("\n<<<====================<<|  | BUSCAR USUARIO VIA E-MAIL |  |>>====================>>>\n\n", opcao);
                                                  
            printf("Informe o email:");
            fgets(email_busca, 30, stdin);           

			/*for(i=0; i<1000; i++){
                if(strcmp(email_busca, email[i], 30) == 0){
                    i = j;
				}
				}
				printf("\nNome: %s", nome[i]);
            	printf("Email: %s", email[i]);
            	printf("Sexo: %s", sexo[i]);
            	printf("Endereco: %s", endereco[i]);
            	printf("Altura: %.2lf M\n", altura[i]);
				*/
                   
                
                       
            break;
//fim do case 4

        case 5:
            //imprima todos os usuarios cadastrados      
            printf("\n<<<====================<<|   USUARIOS CADASTRADOS  |>>====================>>>\n\n", opcao);                               
			printf("Nome: %s", nome[i]);
			printf("E-mail: %s", email[i]);
			printf("Endereco: %s", endereco[i]);
			printf("Sexo: %s\n", sexo[i]);
			printf("Vacina: %c\n", vacina[i]);  
			printf("Altura: %.2lf\n\n", altura[i]);    
    		break;                        
                
//Fim do case 5
			
        case 6:
        	//Faca backup dos usuarios cadastrados
            printf("\n<<<=====================<<|     | BACKUP DOS USUARIOS |    |>>====================>>>\n\n", opcao);
                                                      //coloquei essa mensagem tbm
           for(j = 0; j < 1000; j++){	 
	            strcpy(nomebkp[j],nome[j]);
				strcpy(emailbkp[j],email[j] );
				strcpy(sexobkp[j],sexo[j] );
				strcpy(enderecobkp[j],endereco[j]);
				vacinabkp[j] = vacina[j];
				alturabkp[j] = altura[j];
				
			}
			printf("BACKUP FEITO COM SUCESSO! \n\n");
        break;
//Fim do case 6

        case 7:
        	//faca restauracao dos dados
            printf("\n<<<====================<<|        | RESTAURAR DADOS |      |>>====================>>>\n\n", opcao);
/*
			 for(j=0; j<1000; j++;){
				strcpy(nome[j], nomeB[j]);
				strcpy(email[j], emailB[j]);
				strcpy(endereco[j],enderecoB[j]);
				strcpy(sexo[j], sexoB[j]);
				strcpy(vacina[j], vacinaB[j]);
				altura[j] = alturaB[j];
			} 

		*/	
				                                     
           
        break;
//fim do case 7

        
        default: printf("[Opcao inexistente] \n");
        break;
        }
    };

return 0;
}
