#include <stdio.h>
#include <stdlib.h>

//inicio do programa
int main (){
	
	//declaração de variaveis
	float 	l1 = 0,
			l2 = 0,
			l3 = 0,
			l4 = 0,
			a = 0,
			t = 0;
			
	//prints e scans para saber as medidas das paredes
	printf("Digite a largura da parede onde esta a porta: ");
	scanf("%f" , &l1);
	printf("Digite a largura da segunda parede: ");
	scanf("%f" , &l2);
	printf("Digite a largura da terceira parede: ");
	scanf("%f" , &l3);
	printf("Digite a largura da quarta parede: ");
	scanf("%f" , &l4);
	
	//sequencia para calcular a area de cada parede, area do comodo e a quantidade de latas de tintas necessárias
	l1 = ((l1 * 2.80) - 1.68);
	l2 = (l2 * 2.80);
	l3 = (l3 * 2.80);
	l4 = (l4 * 2.80);
	
	a = (l1 + l2 + l3 + l4);
	
	t = a/15.0;
	
	//resultado final de latas de tinta
	printf("A quantidade de latas de tinta eh: %.2f \n", t);
	
	system("pause");
	return 0;
}
