#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//programa repetirá a mensagem 5 vezes ou o numero de vezes passado a ele por argumento
int main (int argc, char const *argv[]){
	//argc será no minimo 1, pois terá pelo menos o nome do programa
	//qualquer outra informação adicionada aumentará no contador
	if(argc == 1){	//
		for(int i =0 ; i <5; ++i){
			printf("Sou um processo filho!! \n");
			sleep (1); //dorme por 1 segundo
		}
	}
	else{
		int repeticoes = atoi(argv[1]);
		for(int i =0 ; i < repeticoes; ++i){
			printf("Sou um processo filho!! \n");
			sleep (1); //dorme por 1 segundo
		}
	}

	return 0;
}