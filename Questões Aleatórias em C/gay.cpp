#include<stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
 int I;
 float A, B, C, aux;
 		printf("menu:\n 1 -> para ordem crescente\n 2 -> para ordem descrescente\n 3 -> para que o maior valor fique no meio \n\n");
 		printf("Digite sua op��o: "); 	scanf("%d", &I);
 	
	if( I >= 1 && I <=3 ){
	 	
	 	printf("insira os 3 valores: \n");
 		scanf("%f", &A);
 		scanf("%f", &B);
 		scanf("%f", &C);
	 	
 		if( I == 1 ){ 
 			if( A < B && B < C && A < C ) // 1
 				printf("Op��o escolhida -> 1 para ordem crescente: %.2f, %.2f, %.2f \n", A, B, C);
			if( A < B && B > C && A < C ) // 2
				printf("Op��o escolhida -> 1 para ordem crescente: %.2f, %.2f, %.2f \n", A, C, B);
			if( A > B && B < C && A < C ) // 3
				printf("Op��o escolhida -> 1 para ordem crescente: %.2f, %.2f, %.2f \n", B, A, C);
			if( A < B && B > C && A > C ) //4
					printf("Op��o escolhida -> 1 para ordem crescente: %.2f, %.2f, %.2f \n", C, A, B);
			if( A > B && B < C && A > C ) // 5
				printf("Op��o escolhida -> 1 para ordem crescente: %.2f, %.2f, %.2f \n", B, C, A);
			if( A > B && B > C && A > C ) // 6
				printf("Op��o escolhida -> 1 para ordem crescente: %.2f, %.2f, %.2f \n", C, B, A);
		}
 		if( I == 2 ){ 
 			if( A < B && B < C && A < C ) // 1
 				printf("Op��o escolhida -> 2 para ordem descrescente: %.2f, %.2f, %.2f \n", C, B, A);
			if( A < B && B > C && A < C ) // 2
				printf("Op��o escolhida -> 2 para ordem descrescente: %.2f, %.2f, %.2f \n", B, C, A);
			if( A > B && B < C && A < C ) // 3
				printf("Op��o escolhida -> 2 para ordem descrescente:: %.2f, %.2f, %.2f \n", C, A, B);
			if( A < B && B > C && A > C ) // 4
				printf("Op��o escolhida -> 2 para ordem descrescente: %.2f, %.2f, %.2f \n", B, A, C);
			if( A > B && B < C && A > C ) // 5
				printf("Op��o escolhida -> 2 para ordem descrescente: %.2f, %.2f, %.2f \n", A, C, B);
			if( A > B && B > C && A > C ) // 6
				printf("Op��o escolhida -> 2 para ordem descrescente: %.2f, %.2f, %.2f \n", A, B, C);
		}else {
			if( A > B && A > C )
				printf("Op��o escolhida -> 3 para que o maior valor fique no meio:");
			if( B > A && B > C )
				printf("Op��o escolhida -> 3 para que o maior valor fique no meio:");
			if( C > A && C > B )
				printf("Op��o escolhida -> 3 para que o maior valor fique no meio:");	
		}	
	}else 
 			printf("\nOp��o invalida! \n\n s� s�o permitidos os comandos \n 1 -> para ordem crescente\n 2 -> para ordem descrescente\n 3 -> para que o maior valor fique no meio.");
	return 0;
}
