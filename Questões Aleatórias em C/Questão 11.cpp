#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//inicio do programa
int main (){
	
	//declaração das variaveis; contadores para seguir os proximos comandos
	int primo_necessario, primo_encontrado = 0, contador = 2, divisores;
	printf("Quantos numeros primos pretende exibir? ");
	scanf("%d" , &primo_necessario);
	
	/*
	while e for para calcular o resto de todo numero divizivel por 2 e os seguintes numeros. 
	caso encontre mais de um divisor que seja correto, o comando para, vai para o proximo numero
	e adiciona um contador
	*/
	
	while(primo_necessario != primo_encontrado){
	divisores = 0;
	for(int i = 2; i < contador; i++){
		if(contador%i==0){
		divisores ++;
		break;
		}
	}
	if(divisores == 0){
	printf("\n Primos: %d \n" , contador); 
	primo_encontrado++;
	}
	contador++;
	}
		
	system("pause");
	return 0;
}
