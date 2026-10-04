#include <stdio.h>
#include "funcoes.h"

	int acertosAlt = 0;
	int lista;
	char enunciado [100][200];
	char alt_A[100][100], alt_B[100][100], alt_C[100][100], alt_D[100][100];
	char alt_Correta[100];
	char resposta;
	int i;

void exibirMenu(void){
	printf("=== Quiz ===\n");
	printf("1. Jogar\n");
	printf("2. Cadastrar pergunta\n");
	printf("3. Listar perguntas\n");
	printf("4. Estatisticas\n");
	printf("0. Sair\n");
	printf("\n");
}

void gameplayMaster(){
	int numeros = 0;
	for (i = 0; i < lista; i++){
	printf("Pergunta %d: %s\n", numeros = numeros + 1, enunciado[i]);
	
	printf ("A) %s\n", alt_A[i]);
	printf ("B) %s\n", alt_B[i]);
	printf ("C) %s\n", alt_C[i]);
	printf ("D) %s\n", alt_D[i]);
	scanf(" %c", &resposta);
	if(resposta == alt_Correta[i]){
	printf("Resposta: %c\n", alt_Correta[i]);
	printf("Correto!\n");
	acertosAlt = acertosAlt + 1;
	int resultado = porcentagem(acertosAlt);
	printf ("Acertos: %d\n", acertosAlt);
	printf("Porcentagem: %d%%\n", resultado);
	}else{
		printf("Resposta Errada\n");
		printf ("Acertos: %d\n", acertosAlt);
		int resultado = porcentagem(acertosAlt);
		printf("Porcentagem: %d%%\n", resultado);
	}

}
}
void cadastrarPergunta(){
	
	printf("Digite quantas perguntas quer cadastrar: \n");
	scanf("%d", &lista);
	for (i = 0; i < lista; i++){

	printf("Digite sua pergunta\n");
	scanf(" %199[^\n]", enunciado[i]);
	
	printf("Digite as alternativas\n");
	scanf(" %99[^\n]" " %99[^\n]" " %99[^\n]" " %99[^\n]", alt_A[i], alt_B[i], alt_C[i], alt_D[i]);
	
	printf("Digite a alternativa correta\n");
	scanf(" %c", &alt_Correta[i]);
}
}

void listarPerguntas(void){
	int numeros = 0;
	for(i = 0; i < lista; i++){
		printf("Pergunta %d\n", numeros = numeros + 1);
		printf("%s\n", enunciado[i]);
		
		printf ("A) %s\n", alt_A[i]);
		printf ("B) %s\n", alt_B[i]);
		printf ("C) %s\n", alt_C[i]);
		printf ("D) %s\n", alt_D[i]);
		
		printf("Resposta correta: %c\n", alt_Correta[i]);
		printf("\n");
}
}
void estatisticas (void){
	int resultado = porcentagem(acertosAlt);
	
	printf("Suas estatisticas\n");
	printf("Total de acertos: %d\n", acertosAlt);
	printf("Porcentagem de acertos: %d%%\n", resultado);
}
int porcentagem(int acertosAlt){
	
	return (acertosAlt * 100) / lista;
}
