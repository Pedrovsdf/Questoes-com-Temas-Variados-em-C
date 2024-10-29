#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//inicio do programa
int main (){
//declaracao das variaveis
	float 	muni1 = 0, muni2 = 0, muni3 = 0, muni4 = 0, muni5 = 0, muni6 = 0, muni7 = 0, muni8 = 0, muni9 = 0, muni10 = 0, media = 0;
	int qtdmenor = 0, qtdmaior = 0; //qtd menor = contador para cidades temp menor q 25/qtd maior = contador para cidade temp maior 30	
	char nome1 [50], nome2 [50], nome3 [50], nome4 [50], nome5 [50], nome6 [50], nome7 [50], nome8 [50], nome9 [50], nome10 [50];

//sequencia de perguntas sobre o nome dos municipios e a media de suas temperaturas
	printf("Informe o nome do primeiro municipio: ");
	scanf("%s" , &nome1);
	
	printf("Informe a temperatura media do primeiro municipio: ");
	scanf("%f" , &muni1);
	
	printf("Informe o nome do segundo municipio: ");
	scanf("%s" , &nome2);
	
	printf("Informe a temperatura media do segundo municipio: ");
	scanf("%f" , &muni2);
	
	printf("Informe o nome do terceiro municipio: ");
	scanf("%s" , &nome3);
	
	printf("Informe a temperatura media do terceiro municipio: ");
	scanf("%f" , &muni3);
	
	printf("Informe o nome do quarto municipio: ");
	scanf("%s" , &nome4);
	
	printf("Informe a temperatura media do quarto municipio: ");
	scanf("%f" , &muni4);
	
	printf("Informe o nome do quinto municipio: ");
	scanf("%s" , &nome5);
	
	printf("Informe a temperatura media do quinto municipio: ");
	scanf("%f" , &muni5);
	
	printf("Informe o nome do sexto municipio: ");
	scanf("%s" , &nome6);
	
	printf("Informe a temperatura media do sexto municipio: ");
	scanf("%f" , &muni6);
	
	printf("Informe o nome do setimo municipio: ");
	scanf("%s" , &nome7);
	
	printf("Informe a temperatura media do setimo municipio: ");
	scanf("%f" , &muni7);
	
	printf("Informe o nome do oitavo municipio: ");
	scanf("%s" , &nome8);
	
	printf("Informe a temperatura media do oitavo municipio: ");
	scanf("%f" , &muni8);
	
	printf("Informe o nome do nono municipio: ");
	scanf("%s" , &nome9);
	
	printf("Informe a temperatura media do nono municipio: ");
	scanf("%f" , &muni9);
	
	printf("Informe o nome do decimo municipio: ");
	scanf("%s" , &nome10);
	
	printf("Informe a temperatura media do decimo municipio: ");
	scanf("%f" , &muni10);
	
//calculo da media de temperatura das cidades 
	media = ((muni1 + muni2 + muni3 + muni4 + muni5 + muni6 + muni7 + muni8 + muni9 + muni10)/10.0);

//printf para informar a media de temperatura da regiao
	printf("A temperatura media da regiao eh: %2.1f \n" , media);
	
//printf e sequencia de ifs para informar os municipios com media de temperatura inferior a 25 graus
	printf("Os municipios com temperatura abaixo dos 25 graus sao: \n\t");
	
	if(muni1 < 25.0){
		printf(" %s \n\t" , nome1);
		qtdmenor++;
	}
	if(muni2 < 25.0){
		printf(" %s \n\t" , nome2);
		qtdmenor++;
	}
	if(muni3 < 25.0){
		printf(" %s \n\t" , nome3);
		qtdmenor++;
	}
	if(muni4 < 25.0){
		printf(" %s \n\t" , nome4);
		qtdmenor++;
	}
	if(muni5 < 25.0){
		printf(" %s \n\t" , nome5);
		qtdmenor++;
	}
	if(muni6 < 25.0){
		printf(" %s \n\t" , nome6);
		qtdmenor++;
	}
	if(muni7 < 25.0){
		printf(" %s \n\t" , nome7);
		qtdmenor++;
	}
	if(muni8 < 25.0){
		printf(" %s \n\t" , nome8);
		qtdmenor++;
	}
	if(muni9 < 25.0){
		printf(" %s \n\t" , nome9);
		qtdmenor++;
	}
	if(muni10 < 25.0){
		printf(" %s \n" , nome10);
		qtdmenor++;
	}
	//printf e sequencia de ifs para informar os municipios com media de temperatura superior a 30 graus
	printf("Os municipios com temperatura acima dos 30 graus sao: \n\t");
	
	if(muni1 > 30.0){
		printf(" %s \n\t" , nome1);
		qtdmaior++;
	}
	if(muni2 > 30.0){
		printf(" %s \n\t" , nome2);
		qtdmaior++;
	}
	if(muni3 > 30.0){
		printf(" %s \n\t" , nome3);
		qtdmaior++;
	}
	if(muni4 > 30.0){
		printf(" %s \n\t" , nome4);
		qtdmaior++;
	}
	if(muni5 > 30.0){
		printf(" %s \n\t" , nome5);
		qtdmaior++;
	}
	if(muni6 > 30.0){
		printf(" %s \n\t" , nome6);
		qtdmaior++;
	}
	if(muni7 > 30.0){
		printf(" %s \n\t" , nome7);
		qtdmaior++;
	}
	if(muni8 > 30.0){
		printf(" %s \n\t" , nome8);
		qtdmaior++;
	}
	if(muni9 > 30.0){
		printf(" %s \n\t" , nome9);
		qtdmaior++;
	}
	if(muni10 > 30.0){
		printf(" %s \n" , nome10);
		qtdmaior++;
	}
	//sequencia de prints para informar a quantidade de cidade com menor e maior temperatura
	printf("A quantidade de cidades com temperaturas menor que 25 graus eh: %d \n", qtdmenor); 
	printf("A quantidade de cidades com temperaturas maior que 30 graus eh: %d \n", qtdmaior);
	
	system("pause");
	return 0;
}
