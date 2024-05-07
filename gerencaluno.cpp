#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno{
	
	int id;
	char nome [50];
	char email[50];
	int tel[11];
	int numcurso;
	int codcurso[10];
	char nomecurso[10][50];
}alunos;

int main(){
	
	char op;
	char sair = 'n';
	int i;
	alunos inf[20];
	int numAlu = 1;
	int encontrado = 0;
	int alunoIndex = -1;
	char confirmar;
	
	inf[0].id = 12345;
strcpy(inf[0].nome, "Jorge");
strcpy(inf[0].email, "jorge@gmail.com");
inf[0].tel[0] = 982437650;
inf[0].numcurso = 2;
inf[0].codcurso[0] = 1;
strcpy(inf[0].nomecurso[0], "Info");
inf[0].codcurso[1] = 2;
strcpy(inf[0].nomecurso[1], "Matematica");


	do{
	system("cls");
	printf("\t================================================== \n");
	printf("\t\t Sistema de gerenciamento de alunos \n");
	printf("\t================================================== \n");
	printf("\t\t\t\t MENU \n");
	printf("\t================================================== \n");
    printf("\t[1] Adicionar um novo aluno. \n");
    printf("\t[2] Mostrar todos os alunos. \n");     
    printf("\t[3] Pesquisar um aluno. \n");             
    printf("\t[4] Editar um aluno. \n");             
    printf("\t[5] Excluir um aluno. \n");             
    printf("\t[6] Excluir todos os alunos. \n");            
    printf("\t[7] Limpar a janela. \n");             
    printf("\t[8] Diretriz do usuario. \n");            
    printf("\t[9] Sobre nos. \n");             
    printf("\t[0] Sair do programa. \n");           
    printf("\t================================================== \n");       
    printf("\tDigite a escolha: \n");
	scanf(" %c", &op);  
	
	switch(op){
		
		case '1':
		system("cls");
		printf("Adicionando aluno \n\n");
		printf("Digite o ID: \n");
		scanf("%d", &inf[numAlu].id);
		printf("Digite o nome: \n");
		scanf("%s", &inf[numAlu].nome);
		printf("Digite o email: \n");
		scanf("%s", &inf[numAlu].email);
		printf("Digite o telefone: \n");
		scanf("%d", &inf[numAlu].tel);
		do{
		
		printf("Digite o numero de cursos: \n");
		scanf("%d", &inf[numAlu].numcurso);
		if(inf[numAlu].numcurso > 4 || inf[numAlu].numcurso < 1){
			
			printf(" Erro: O numero de cursos nao pode ser superior a 4 e menos de 1. \n");
					
		} }while(inf[numAlu].numcurso > 4 || inf[numAlu].numcurso < 1);
			
		for(i = 0; i < inf[numAlu].numcurso; i++){
					
						printf("Digite o codigo do curso %d: \n", i+1);
						scanf("%d", &inf[numAlu].codcurso[i]);
						printf("Digite o nome do curso %d: \n", i+1);
						scanf("%s", &inf[numAlu].nomecurso[i]);	
				}				
		                			
				printf("Aluno adicionado!\n\n\n");
				numAlu++;
                printf("Voltar(f) ou Sair(e)?\n\n");
                scanf(" %c", &sair);
                 if (sair == 'e') {
                 	system("cls");
                    printf("Saindo......\n");
                    exit(0);
                }
                break;
                
        case '2':
        	
        system("cls");
        printf("ESTUDANTES\n\n");
        printf("========================================================\n");
        printf("ID   |    NOME    |     EMAIL        |  No. Cursos  | \n");
        printf("========================================================\n");
        for (i = 0; i < numAlu; i++) {
        printf("%d |   %s    |  %s    | %d  |  \n", inf[i].id, inf[i].nome, inf[i].email, inf[i].numcurso);
    
                    }
                    
                    printf("\n\nVoltar(f) ou Sair(e)?\n");
               		 scanf(" %c", &sair);
                 	if (sair == 'e') {
                 	system("cls");
                    printf("Saindo......\n"); 
					system("pause ");
                    exit(0);
                }
                           
        break;
        
        	case '3':
        		 system("cls");
        		 int idProcurado;
        		 printf("Digite o ID do aluno que quer procurar: ");
       			 scanf("%d", &idProcurado);
       			 
        
       		
        		for ( i = 0; i < numAlu; i++) {
            	if (inf[i].id == idProcurado) {
                encontrado = 1; // Aluno encontrado
              
                printf("Aluno encontrado: %d\n", inf[i].id);
                printf("ID: %d\n", inf[i].id);
                printf("Nome: %s\n", inf[i].nome);
                printf("Email: %s\n", inf[i].email);
                printf("Telefone: %d\n\n", inf[i].tel);
                printf("Informacoes do aluno: %d \n", inf[i].numcurso);
                for (int j = 0; j < inf[i].numcurso; j++) {
                    printf("Código do curso %d: %d\n", j+1, inf[i].codcurso[j]);
                    printf("Nome do curso %d: %s\n", j+1, inf[i].nomecurso[j]);
                }
                
                printf("\n");
            }
        }
        
        if (!encontrado) {
            printf("Aluno com ID %d não encontrado.\n", idProcurado);
        }
        
         printf("\n\nVoltar(f) ou Sair(e)?\n");
               		 scanf(" %c", &sair);
                 	if (sair == 'e') {
                 	system("cls");
                    printf("Saindo......\n");
                    exit(0);
                }
        
        		break;
        		
 	
        case '4':
        			
        system("cls");
        		 printf("Editando um estudante \n\n\n");
        		 printf("Enre com o ID do estudante: ");
       			 scanf("%d", &idProcurado);
       			 
        		
       		
        		for ( i = 0; i < numAlu; i++) {
            	if (inf[i].id == idProcurado) {
                encontrado = 1; // Aluno encontrado
                alunoIndex = i;
                printf("Aluno encontrado: %d\n", inf[i].id);
                printf("ID: %d\n", inf[i].id);
                printf("Nome: %s\n", inf[i].nome);
                printf("Email: %s\n", inf[i].email);
                printf("Telefone: %d\n\n", inf[i].tel);
                printf("Informacoes do aluno: %d \n", inf[i].numcurso);
                for (int j = 0; j < inf[i].numcurso; j++) {
                    printf("Codigo do curso %d: %d\n", j+1, inf[i].codcurso[j]);
                    printf("Nome do curso %d: %s\n", j+1, inf[i].nomecurso[j]);
                }
                
                printf("\n");
            }
        }
        
         if (alunoIndex != -1) {
         	
        int editar;
            printf("Qual informacao voce deseja editar? (1 - Nome, 2 - Email, 3 - Telefone, 4 - Cursos, 0 - Sair)\n");
            scanf("%d", &editar);

            switch (editar) {
                case 0:
                    // Pular para próxima informação
                    break;
                case 1:
                    printf("Digite o novo nome: ");
                    scanf("%s", inf[alunoIndex].nome);
                    break;
                case 2:
                    printf("Digite o novo email: ");
                    scanf("%s", inf[alunoIndex].email);
                    break;
                case 3:
                    printf("Digite o novo telefone: ");
                    scanf("%d", &inf[alunoIndex].tel);
                    break;
                case 4:
                    printf("Digite o novo numero de cursos: ");
                    scanf("%d", &inf[alunoIndex].numcurso);
                    for (int k = 0; k < inf[alunoIndex].numcurso; k++) {
                        printf("Digite o codigo do curso %d: ", k + 1);
                        scanf("%d", &inf[alunoIndex].codcurso[k]);
                        printf("Digite o nome do curso %d: ", k + 1);
                        scanf("%s", inf[alunoIndex].nomecurso[k]);
                    }
                    break;
                default:
                    if (editar >= 5 && editar < 5 + inf[i].numcurso) {
                        int index = editar - 5;
                        printf("Digite o novo codigo do curso %d: ", index + 1);
                        scanf("%d", &inf[alunoIndex].codcurso[index]);
                        printf("Digite o novo nome do curso %d: ", index + 1);
                        scanf("%s", inf[alunoIndex].nomecurso[index]);
                    } else {
                        printf("Opção inválida.\n");
                    }
                    break;
            }
     
        if (!encontrado) {
            printf("Aluno com ID %d não encontrado.\n", idProcurado);
        }			
   } 
   		printf("Aluno atualizado com sucesso! \n\n");
   		 printf("\n\nVoltar(f) ou Sair(e)?\n");
               		 scanf(" %c", &sair);
                 	if (sair == 'e') {
                 	system("cls");
                    printf("Saindo......\n");
                    exit(0);
                }
                
        break;
        
        case '5':
        	
         system("cls");
        		 printf("Deletando um estudante \n\n\n");
        		 printf("Enre com o ID do estudante: ");
       			 scanf("%d", &idProcurado);
       			 
        		
       		
        		for ( i = 0; i < numAlu; i++) {
            	if (inf[i].id == idProcurado) {
                encontrado = 1; // Aluno encontrado
                alunoIndex = i;
                printf("Aluno encontrado: %d\n", inf[i].id);
                printf("ID: %d\n", inf[i].id);
                printf("Nome: %s\n", inf[i].nome);
                printf("Email: %s\n", inf[i].email);
                printf("Telefone: %d\n\n", inf[i].tel);
                printf("Informacoes do aluno: %d \n", inf[i].numcurso);
                for (int j = 0; j < inf[i].numcurso; j++) {
                    printf("Codigo do curso %d: %d\n", j+1, inf[i].codcurso[j]);
                    printf("Nome do curso %d: %s\n", j+1, inf[i].nomecurso[j]);
                }
                
                printf("\n");
            }
        }
        
        
        
            printf("Deseja realmente excluir este aluno? (s/n): ");
            scanf(" %c", &confirmar);

            if (confirmar == 's' || confirmar == 'S') {
                for (int j = alunoIndex; j < numAlu - 1; j++) {
                    inf[j] = inf[j + 1];
                }
                
                numAlu--;
                printf("Aluno excluido com sucesso!\n");
            } else {
                printf("Exclusao cancelada.\n");
            }
            
             printf("\n\nVoltar(f) ou Sair(e)?\n");
               		 scanf(" %c", &sair);
                 	if (sair == 'e') {
                 	system("cls");
                    printf("Saindo......\n");
                    exit(0);
                }
                
            break;
            
            case '6':
   				 system("cls");
   				  printf("Deletando todos os estudantes \n\n\n");
    				printf("Tem certeza que deseja excluir todos os alunos? (s/n): ");
   				 scanf(" %c", &confirmar);

    		if (confirmar == 's' || confirmar == 'S') {
       		 printf("Excluindo todos os alunos...\n");
       		 numAlu = 0; // Reinicia o número total de alunos para 0
       		 printf("Todos os alunos foram excluidos com sucesso!\n");
    		} else {
       		 printf("Exclusao cancelada.\n");
   				 }

   			 printf("\n\nVoltar(f) ou Sair(e)?\n");
    		 scanf(" %c", &sair);
    		 if (sair == 'e') {
    		 system("cls");
   		     printf("Saindo......\n");
      		  exit(0);
   			 }
      		
      		break;
      		
      		case '7':
      			
      			system("cls");
      			
      		break;
      		
      		case '8':
      			
      			system("cls");
      			 system("cls");
    printf("**** Como funciona? ****\n\n");
    printf("-> Voce so podera armazenar o ID do Aluno, Nome, Email, Telefone, Numero de Cursos.\n");
    printf("-> Um aluno pode ter no maximo 4 cursos e no minimo 1 curso.\n");
    printf("-> A ID do aluno e exclusiva para cada aluno.\n");
    printf("-> O nome do aluno pode ter no maximo 50 caracteres.\n");
    printf("-> O e-mail do aluno pode ter no maximo 50 caracteres e e exclusivo para cada aluno.\n");
    printf("-> O telefone do aluno pode ter no maximo 12 caracteres e e exclusivo para cada aluno.\n");
    printf("-> O codigo do curso pode ter no maximo 10 caracteres.\n");
    printf("-> O nome do curso pode ter no maximo 20 caracteres.\n\n");
    printf("->> Duvida: pedro@gmail.com <<-\n");

    printf("\n\nVoltar(f) ou Sair(e)?\n");
    scanf(" %c", &sair);
    if (sair == 'e') {
        system("cls");
        printf("Saindo......\n");
        exit(0);
    }

    break;
      			
      	case '9':
      		
      		 system("cls");
    printf("**** Sobre ****\n\n");

    printf("-> Este e um projeto simples de sistema de gerenciamento de alunos.\n");
    printf("-> Voce pode modificar o codigo-fonte.\n");
    printf("-> Voce pode usar este projeto apenas para fins pessoais, nao para negocios.\n\n");
 

    printf("\n\nVoltar(f) ou Sair(e)?\n");
    scanf(" %c", &sair);
    if (sair == 'e') {
        system("cls");
        printf("Saindo......\n");
        exit(0);
    }

    break;
                
            case '0':
			system("cls");
    		printf("Saindo......\n");
            exit(0);
            break;
        }
    } while (sair != 's');

	system("pause >nul");
	return 0;
}
