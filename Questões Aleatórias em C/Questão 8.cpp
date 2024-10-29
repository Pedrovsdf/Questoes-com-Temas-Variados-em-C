#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//inicio do programa
int main (){
	
	//declaraçao das variaveis
	int 	i = 0;
	float 	a = 0, 
			b = 0, 
			c = 0;
	
	//scan pedindo uma opção
	printf("Digite um valor (opcoes: 1|2|3): ");
	scanf("%d" , &i);
	
	//if caso a opção seja errada
	if(i > 3 || i < 1){
		printf("Numero digitado eh invalido");
		return 0;
	}
	
	//print pedindo 3 valores ao usuario
	printf("Digite uma sequencia de 3 valores: \n");
	scanf("%f" , &a);
	scanf("%f" , &b);
	scanf("%f" , &c);
	
	//sequencia de ifs para a opção numero 1
	if(i == 1 && a > b && b > c)
		printf("A ordem crescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , c, b, a);
	
	if(i == 1 && a > c && c > b)
		printf("A ordem crescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , b, c, a);

	if(i == 1 && b > a && a > c)
		printf("A ordem crescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , c, a, b);
	
	if(i == 1 && b > c && c > a)
		printf("A ordem crescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , a, c, b);
	
	if(i == 1 && c > a && a > b)
		printf("A ordem crescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , b, a, c);
	
	if(i == 1 && c > b && b > a)
		printf("A ordem crescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , a, b, c);
	
	if(i == 1 && a == b && b == c)
		printf("A ordem crescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , a, b, c);
	
	if(i == 1 && a == b && b > c)
		printf("A ordem crescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , c, a, b);
	
	if(i == 1 && a == b && b < c)
		printf("A ordem crescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , a, b, c);
	
	if(i == 1 && a == c && c > b)
		printf("A ordem crescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , b, a, c);
	
	if(i == 1 && a == c && c < b)
		printf("A ordem crescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , a, c, b);
	
	if(i == 1 && b == c && a > b)
		printf("A ordem crescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , b, c, a);
	
	if(i == 1 && b == c && a < b)
		printf("A ordem crescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , a, b, c);
	
	//sequencia de ifs para a opção numero 2
	if(i == 2 && a > b && b > c)
		printf("A ordem decrescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , a, b, c);
	
	if(i == 2 && a > c && c > b)
		printf("A ordem decrescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , a, c, b);

	if(i == 2 && b > a && a > c)
		printf("A ordem decrescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , b, a, c);
	
	if(i == 2 && b > c && c > a)
		printf("A ordem decrescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , b, c, a);
	
	if(i == 2 && c > a && a > b)
		printf("A ordem decrescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , c, a, b);
	
	if(i == 2 && c > b && b > a)
		printf("A ordem decrescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , c, b, a);
	
	if(i == 2 && a == b && b == c)
		printf("A ordem decrescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , a, b, c);
	
	if(i == 2 && a == b && b > c)
		printf("A ordem decrescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , a, b, c);
	
	if(i == 2 && a == b && b < c)
		printf("A ordem decrescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , c, a, b);
	
	if(i == 2 && a == c && c > b)
		printf("A ordem decrescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , a, c, b);
	
	if(i == 2 && a == c && c < b)
		printf("A ordem decrescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , b, a, c);
	
	if(i == 2 && b == c && a > b)
		printf("A ordem decrescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , a, b, c);
	
	if(i == 2 && b == c && a < b)
		printf("A ordem decrescente dos valores digitados eh: %.2f, %.2f, %.2f \n" , b, c, a);
	
	//sequecia de ifs para a opção numero 3
	if(i == 3 && a > b && a > c)
		printf("O maior valor é o que estah no meio: %.2f, %.2f, %.2f \n" , b, a, c);
	
	if(i == 3 && b > a && b > c)
		printf("O maior valor eh o que estah no meio: %.2f, %.2f, %.2f \n" , a, b, c);
	
	if(i == 3 && c > a && c > b)
		printf("O maior valor é o que estah no meio: %.2f, %.2f, %.2f \n" , a, c, b);
	
	system("pause");
	return 0;
}
