#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(){

	char *comando;	//vetor deve ser zerado para não conter lixo
	char final = 0;
	int i=0;
	final = scanf("%s", comando[i]); //coloca o nome do comando na posicao zero do vetor

	int pid, status;
	while(comando[0] = "s" ){ // se o comando for s, sairá do programa

		//Executa o comando pedido
		//primeiramente, o programa realizará um fork
		//em seguida, a função execv entra em cena e procura pelo programa desejado
		//ele será executado e após seu término}], wait() pegará o valor retornado e continuará no loop até o usuário digitar s
			printf("Terminal:");
			pid = fork();

			if(pid > 0){	//Programa pai
				wait(&status);		//espera pelo filho
			}
			else{		//programa filho
				args[1] = NULL;
				execvp(args[0], args);//execv(const char *path, char *const argv);
								//caminho da função, vetor de argumentos
								//primeiro argumento, por padronização, é o processo que está sendo executado
								//executa codigo;
			}




		

		//repete o loop para esperar o usuário digitar um comando
		i = 0;
		final = scanf("%s", comando[i]); //coloca o nome do comando na posicao zero do vetor 	final = scanf()??? recebe EOF QUANDO ACABA

		while(final != 0){	//pegar comandos múltiplos, por exemplo, ls -a
			final = scanf("%s", comando[i]);
			++i;
		}
		//quando acabar os comando, insere NULL no último vetor (padrão)
		comando[i] = NULL; 
	}

	return 0;
	
}