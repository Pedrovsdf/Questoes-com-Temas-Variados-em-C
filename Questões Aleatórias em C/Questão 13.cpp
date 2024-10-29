#include <stdio.h>
#include <stdlib.h>

//inicio do programa
int main (){
	
	//declaração das variaveis
	int contador = 0, opcao = 0, qtd_refeicoes = 0, alunos_entrevistados = 0, qtd10 = 0, qtd1020 = 0, qtdmaior20 = 0;
	
	//while para fazer a entrevista enquanto o usuario informar que deseja responder novamente
	while(contador == 0){
	
	printf("Quantas refeicoes fez no mes anterior? ");
	scanf("%d" , &qtd_refeicoes);
	alunos_entrevistados++;
	
	//seguencia de ifs para verificar os alunos que responderam a entrevista e add os contadores correpondentes
	if(qtd_refeicoes < 10){
		qtd10 ++;
		printf("Digite 0 para continuar a entrevista e 1 para finalizar. \n");
		scanf("%d" , &opcao);
		if(opcao == 1){
			contador++;
		}
	}
	
	if(qtd_refeicoes >= 10 && qtd_refeicoes <= 20){
		qtd1020++;
		printf("Digite 0 para continuar a entrevista e 1 para finalizar. \n");
		scanf("%d" , &opcao);
		if(opcao == 1){
			contador++;
		}
	}
	
	if(qtd_refeicoes > 20){
		qtdmaior20++;
		printf("Digite 0 para continuar a entrevista e 1 para finalizar. \n");
		scanf("%d" , &opcao);
		if(opcao == 1){
			contador++;
		}
	}
	}
	
	/*
	sequencia de prints, para informar o numero de alunos entrevistados e 
	a quantidade que comeu menos de 10 e as outras opções
	*/
	printf("Quantidade de alunos entrevistados foi: %d \n" , alunos_entrevistados);
	printf("Quantidade de alunos que fizeram menos de 10 refeicoes: %d \n" , qtd10);
	printf("Quantidade de alunos que fizeram entre 10 a 20 refeicoes: %d \n" , qtd1020);
	printf("Quantidade de alunos que fizeram mais de 20 refeicoes: %d \n" , qtdmaior20);
	
	system("pause");
	return 0;
}
