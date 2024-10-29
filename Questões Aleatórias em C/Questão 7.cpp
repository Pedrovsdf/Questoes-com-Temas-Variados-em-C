#include <stdlib.h>
#include <stdio.h>

int main (){
	
	//declaração das variaveis
	float 	v = 0,
			q = 0;
			
	printf("Informe o valor unitario do produto: ");
	scanf("%f" , &v);
	printf("Informe a quantidade que sera comprada: ");
	scanf("%f" , &q);
	
	//if caso a quantidade digitada seja menor ou igual a zero
	if(q <= 0){
		printf("Erro na digitacao");
		return 0;
	}
	//if caso a quantidade digitada seja maior que 0 e menor ou igual 10, sem desconto
	if(q > 0 && q <=10.0){
		
		printf("O valor final a ser pago sera: %.2f \n", (v*q));
		printf("Nao houve desconto. \n");
	}
	//if caso a quantidade digitada seja maior que 10 e menor ou igual a 20, com desconto de 10%
	if(q > 10.0 && q <= 20.0){
		
		printf("O valor final a ser pago sera: %.2f \n", ((v*q)-((v*q)*0.10)));
		printf("Desconto de 10%. \n");
	}
	//if caso a quantidade digitada seja maior que 20 e menor ou igual a 50, com desconto de 20%
	if(q > 20.0 && q <= 50.0){
		
		printf("O valor final a ser pago sera: %.2f \n", ((v*q)-((v*q)*0.20)));
		printf("Desconto de 20%. \n");
	}
	//if caso a quantidade digitada seja maior que 50, com desconto de 30%
	if(q > 50.0){
		
		printf("O valor final a ser pago sera: %.2f \n", ((v*q)-((v*q)*0.30)));
		printf("Desconto de 30%. \n");
	}
		
	system("pause");
	return 0;
}
