#include <stdio.h>
#include <math.h>

int main (){
	int I=0;
	float A=0, B=0, C=0, a=0, b=0, c=0;
	
	printf ("Digite o valor de I: ");
	scanf ("%d", &I);
	
	if (I != 1 && I != 2 && I != 3){
		printf ("Erro. O valor digitado deve ser 1, 2 ou 3");
		return 0;
	}
	
	printf ("Digite o valor de A: ");
	scanf ("%f", &A);
	
	printf ("Digite o valor de B: ");
	scanf ("%f", &B);
	
	printf ("Digite o valor de C: ");
	scanf ("%f", &C);
	
	if (I == 1){
		if (A < B && B < C){
		printf ("Os valores de A, B e C em ordem crescente eh: %f, %f, %f", A, B, C);
		return 0;
		}
		else{
		if (A > B && A > C){
		c = A;
		}
		if (B > A && B > C){
		c = B;
		}
		if (C > A && C > B){
		c = C;
		}
		
		if (A > B && A < C || A < B && A > C){
		b = A;
		}
		if (B > A && B < C || B < A && B > C){
		b = B;
			}
		if (C > A && C < B || C < A && C > B){
		b = C;
		}
		
		if (A < B && A < C){
		a = A;
		}
		if (B < A && B < C){
		a = B;
		}
		if (C < A && C < B){
		a = C;
		}
		printf ("Os valores de A, B e C em ordem crescente eh: %f, %f, %f", a, b, c);
		}
	}
	
	if (I == 2){
		if (A > B && B > C){
		printf ("Os valores de A, B e C em ordem decrescente eh: %f, %f, %f", A, B, C);
		return 0;
		}
		else{
		if (A < B && A < C){
		c = A;
		}
		if (B < A && B < C){
		c = B;
		}
		if (C < A && C < B){
		c = C;
		}
		
		if (A > B && A < C || A < B && A > C){
		b = A;
		}
		if (B > A && B < C || B < A && B > C){
		b = B;
		}
		if (C > A && C < B || C < A && C > B){
		b = C;
		}
		
		if (A > B && A > C){
		a = A;
		}
		if (B > A && B > C){
		a = B;
		}
		if (C > A && C > B){
		a = C;
		}
		printf ("Os valores de A, B e C em ordem decrescente eh: %f, %f, %f", a, b, c);
		}
	}
	
	if (I == 3){
		if (A < B && B > C){
		printf ("Os valores de A, B e C, de modo em que o maior valor esteja entre os outros eh: %f, %f, %f", A, B, C);
		return 0;
		}
		else{
		if (A < B && A < C){
		c = A;
		}
		if (B < A && B < C){
		c = B;
		}
		if (C < A && C < B){
		c = C;
		}
		
		if (A > B && A < C || A < B && A > C){
		a = A;
		}
		if (B > A && B < C || B < A && B > C){
		a = B;
		}
		if (C > A && C < B || C < A && C > B){
		a = C;
		}
		
		if (A > B && A > C){
		b = A;
		}
		if (B > A && B > C){
		b = B;
		}
		if (C > A && C > B){
		b = C;
		}
		printf ("Os valores de A, B e C, de modo em que o maior valor esteja entre os outros eh: %f, %f, %f", a, b, c);
		}
	}
	
	return 0;
}
