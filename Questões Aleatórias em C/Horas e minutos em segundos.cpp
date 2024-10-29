#include <stdio.h>
#include <math.h>

int main (){
	int h=0, m=0, s=0;

	printf ("Digite especificamente o valor das horas, minutos e segundos: \n");
	scanf ("%d %d %d", &h, &m, &s);
	
	s=(h*3600)+(m*60)+s;
	
	printf ("O correspondente deste intervalo temporal em segundos eh: %d", s);
	return 0;
}
