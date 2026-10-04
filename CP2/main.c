#include <stdio.h>
#include "funcoes.h"
int main() {

	int opcao;
	do {
		exibirMenu();
		scanf("%d", &opcao);
		
		switch(opcao){	
		case 1:
			gameplayMaster();
			break;
		case 2:
			cadastrarPergunta();
			break;
		case 3:
			listarPerguntas();
			break;
		case 4:	
			estatisticas();
			break;
		default:
		printf("=== Saindo ====");
		}
	}while(opcao != 0);
	return 0;
}
