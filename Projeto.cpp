#include <stdio.h>
#include <stdlib.h>    
#include <string.h>
#include <time.h> 
#include <locale.h>
#include <windows.h>
#include <stdbool.h>

int main(){                                                   
  int editar = 0, opcao = 0, tempo = time(0), i, j, index, id[1000], Ideditar[1000], Idexcluir[1000], excluir;  i = 0;
  char nome[1000][50], email[1000][50], emailb[1000][50], sexo[1000][15], endereco[1000][50], vacina[1000];
  char nomebkp[1000][50], emailbkp[1000][50], sexobkp[1000][15], enderecobkp[1000][50], vacinabkp[1000],  email_busca[30];
  double altura[1000],alturabkp[1000];
                     
 	setlocale(LC_ALL, "PORTUGUESE");
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
	system("cls");

        switch (opcao){
//CASE 1
        case 1:
		for(i = 0; i < 1000; i++){
	
		printf("\n<<<=====================<<|      CADASTRO DE USUARIO       |>>====================>>>\n\n");
                                            
                //NOME
                printf("Digite o nome completo: ");                   
                fflush(stdin);
                fgets(nome[i],50,stdin);
                system("cls");
                
                //EMAIL
                printf("Informe o email: ");
                fflush(stdin);
                fgets(email[i],50,stdin);
                system("cls");
                    
                if(strchr(email[i], '@') == 0){
                    printf("Email invalido\n");
                    
                	printf("Me forneca o email:");
                   	fflush(stdin);
                   	fgets(email[i],50,stdin);
                   	system("cls");
                }
                else{
			printf("Email valido!\n");      
		}
				
		//ENDERECO
                printf("Digite o endereco do usuario: ");
                fflush(stdin);
                fgets(endereco[i],50,stdin);
                system("cls");
                
              	//Sexo
		printf("Digite o sexo do usuario:\n[M]asculino\t[F]eminino\t[ND]nao declarar:  ");
        	scanf("%s", &sexo[i]);
        	system("cls");
			
		if(strcmp(sexo[i], "M") == 0 || (strcmp(sexo[i], "F") == 0) || (strcmp(sexo[i], "ND") == 0)){
        	}
        	else{
            		printf("Sexo %s Invalido\n", sexo[i]);
            		printf("Digite o sexo do usuario:\n[M]asculino\t[F]eminino\t[ND]nao declarar:  ");
        		scanf("%s", &sexo[i]);
        		system("cls");
		}

		//VACINA
               	printf("Se vacinou?\n[S]IM | [N]AO:   ");
                fflush(stdin);
                scanf("%c", &vacina[i]);
                system("cls");
                     
		//Altura
		printf("Digite a altura do usuario: ");
        	scanf("%lf", &altura[i]);
        	system("cls");
        	
		if(altura[i] < 1 || altura[i] > 2){
            		printf("Altura invalida\n");
            		printf("Digite a altura do usuario: ");
        		scanf("%lf", &altura[i]);
        		system("cls");
        	}
                
int continua;	
                printf("Cadastrar outro usuario [0]NAO [1]SIM:  ");
                fflush(stdin);
                scanf("%d", &continua);
                system("cls");
                
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
				system("cls");
				
				if(id[i] == Ideditar[i]){
				printf("Escolha uma opcao: \n[1]Nome\n[2]Email\n[3]Endereco\n[4]Sexo\n[5]Vacina\n[6]Altura\n\nDigite o numero: ");
				fflush(stdin);
				scanf("%d", &editar);
				system("cls");
			}
				else if(id[i] == Ideditar[i]){
				printf("# Editar usu�rio #");
				printf("\n\nEste Id n�o corresponde � nenhum usu�rio\nVoc� ser� encaminhado de volta ao menu!");
				Sleep(5000);
				system("cls");
		}
			

	    switch (editar){
		case 1:
			printf("Informe o nome: ");
			fflush(stdin);
			fgets(nome[index], 50,stdin);
			Sleep(5000);
			system("cls");
			printf("Usu�rio Editado com sucesso\n Voc� ser� enviado ao Menu");
            system("cls");
            break;
					
		case 2:
			printf("Informe o email: ");
			fflush(stdin);
			fgets(email[index], 50,stdin);
			system("cls");
		
			printf("\n%s", email[i]);		
		    if(strchr(email[index], '@') == 0){
			printf("Email invalido\n");				
			printf("Informe o email: ");
			fflush(stdin);
		    fgets(email[index], 50,stdin);	
			system("cls");		
	}       break;
						
		case 3:
			printf("Digite o sexo do usuario:\n[M]asculino\t[F]eminino\t[ND]nao declarar:  ");
        	scanf("%s", &sexo[i]);	
        	system("cls");

			if(strcmp(sexo[i], "M") == 0 || (strcmp(sexo[i], "F") == 0) || (strcmp(sexo[i], "ND") == 0)) {
        }
    	else{
           	printf("Sexo %s Invalido\n", sexo[i]);
            printf("Digite o sexo do usuario:\n[M]asculino\t[F]eminino\t[ND]nao declarar:  \n");
            Sleep(5000);
        	scanf("%s", &sexo[i]);
        	system("cls");
        	printf("Sexo alterado com sucesso\nVoc� sera enviado ao Menu");
			system("cls");
		}   break;
					
		case 4:
			printf("Informe o endereco: ");
			fflush(stdin);
			fgets(endereco[index], 50,stdin);
			system("cls");
			Sleep(5000);
			printf("Endere�o alterado com sucesso\nVoc� sera enviado ao Menu");
			break;
					
		case 5:
			printf("Se vacinou?\n[S]IM | [N]AO:   ");
            fflush(stdin);
          	scanf("%c", &vacina[i]);
          	system("cls");
          	Sleep(5000);
			printf("Vacina alterada com sucesso\nVoc� sera enviado ao Menu");
			system("cls");
			break;

		case 6:
			//ALTURA
			printf("Informe a altura: ");
			fflush(stdin);
			scanf("%lf", &altura[i]);
			system("cls");
						
			if(altura[i] < 1.00 || altura[i] > 2.00){
			printf("Altura invalida\n"); 		
				
			printf("Informe a altura: ");
			fflush(stdin);
			scanf("%lf", &altura[i]);
			system("cls");
			Sleep(5000);
			printf("Altura alterada com sucesso\nVoc� sera enviado ao Menu");
			system("cls");
		}   break;

			default:
		    printf("\nOpcao invalida\n");
			break;
	   } 
        
            break;
//fim do case 2

        case 3:
            printf("\n<<<====================<<|        | EXCLUIR USUARIO |      |>>====================>>>\n\n", opcao);
			printf("Digite o ID do usuario que deseja excluir: ");
			fflush(stdin);
			scanf("%d", &Idexcluir);
			system("cls");
			
			printf("Digite: [0]EXCLUIR ou [1]NAO EXCLUIR\n> ");
			scanf("%d", &excluir);
			
		if(excluir == 0){
			i--;
		
			printf("\nUsuario excluido com sucesso!");
			printf("\n5segundos para voltar ao MENU...");
			Sleep(5000);
			system("cls");	
		}
		else if(excluir == 1){
			printf("Usuario nao excluido");
			printf("\n5segundos para voltar ao MENU...");
			Sleep(5000);
			system("cls");		
		}
		break;
//fim do case 3

        case 4:
            //buscar um usuario via email
        printf("\n<<<====================<<|  | BUSCAR USUARIO VIA E-MAIL |  |>>====================>>>\n\n", opcao);
        printf("Digite o email do usuario que deseja buscar: ");
		fflush(stdin);
		fgets(emailb[i], 50, stdin);
				
		if(strcmp(email[i],emailb[i]) == 0){
			printf("Nome: %sSexo: %s\nEndereco: %sVacinado: %s", nome, sexo, endereco, vacina);
			printf("\n\n5segundos Para voltar ao MENU...");
			Sleep(5000);
			system("cls");
			
		}else if(email[i] != emailb[i]){
			printf("\nEmail invalido, 5segundos para voltar ao MENU...");
			Sleep(5000);
			system("cls");
		}
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
        	printf("\n<<<====================<<|      | DADOS RESTAURADOS |      |>>====================>>>\n\n", opcao);
			
			printf("5segundos para finalizar...");
			Sleep(5000);
			                                      //CORRIGIR PARA NAO FINALIZAR AQUI
/*                                               //FAZER VOLTAR PARA O MENU
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

        default: printf("\n[Opcao inexistente]\n\n");
        break;
        }
    };

return 0;
}
