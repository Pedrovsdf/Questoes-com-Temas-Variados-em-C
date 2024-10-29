#include <stdlib.h>
#include <stdio.h>
int main (){
    int	representantes = 10,
        itens = 0,
        total_de_itens = 0,
        quantidade_de_pedidos = 0,
        representante_atual = 0;

    float	valor_t = 0,
			valor_t_a = 0,
			porcentagem_atual = 0,
			comissao = 0,
			comissao_total = 0,
			total_de_vendas = 0,
			comissao_vendedor1 = 0,
			comissao_vendedor2 = 0,
			comissao_vendedor3 = 0,
			comissao_vendedor4 = 0,
			comissao_vendedor5 = 0,
			comissao_vendedor6 = 0,
			comissao_vendedor7 = 0,
			comissao_vendedor8 = 0,
			comissao_vendedor9 = 0,
			comissao_vendedor10 = 0;

    printf("Informe a quantidade de pedidos:");
    scanf("%d", &quantidade_de_pedidos);

    for (int pedido = 1; pedido <= quantidade_de_pedidos; pedido++)
    {
        printf("Informe o representante:");
        scanf("%d", &representante_atual);

        printf("Informe a quantidade de itens: ");
        scanf("%d", &itens);

        total_de_itens += itens; // Somar a quantidade de itens que a companhia vendeu

        printf("Informe o valor total da venda:");
        scanf("%f", &valor_t_a);

        valor_t += valor_t_a;   // Valor total recebido recebe o valor da venda do representante atual

        /**
         *  Atribuir a porcentagem de comissão
         */
        
        if (itens < 20)
            comissao = 0.10;
        else if (itens >= 20 && itens <= 49)
            comissao = 0.15;
        else if (itens >= 50 && itens <= 74)
            comissao = 0.20;
        else if (itens > 74)
            comissao = 0.25;


        porcentagem_atual = valor_t_a * comissao;   // Valor total da comissão do vendedor atual
        comissao_total += porcentagem_atual;

        /**
        * Atribuir comissão para cada representante
        */

        if (representante_atual == 1)
            comissao_vendedor1 += porcentagem_atual;
        else if (representante_atual == 2)
            comissao_vendedor2 += porcentagem_atual;
        else if (representante_atual == 3)
            comissao_vendedor3 += porcentagem_atual;
        else if (representante_atual == 4)
            comissao_vendedor4 += porcentagem_atual;
        else if (representante_atual == 5)
            comissao_vendedor5 += porcentagem_atual;
        else if (representante_atual == 6)
            comissao_vendedor6 += porcentagem_atual;
        else if (representante_atual == 7)
            comissao_vendedor7 += porcentagem_atual;
        else if (representante_atual == 8)
            comissao_vendedor8 += porcentagem_atual;
        else if (representante_atual == 9)
            comissao_vendedor9 += porcentagem_atual;
        else if (representante_atual == 10)
            comissao_vendedor10 += porcentagem_atual;

        printf("O valor da comissao do pedido '%d' eh de %.2f \n\n", pedido, porcentagem_atual);

    }

    printf("O representante 1 recebeu %.2f \n", comissao_vendedor1);
    printf("O representante 2 recebeu %.2f \n", comissao_vendedor2);
    printf("O representante 3 recebeu %.2f \n", comissao_vendedor3);
    printf("O representante 4 recebeu %.2f \n", comissao_vendedor4);
    printf("O representante 5 recebeu %.2f \n", comissao_vendedor5);
    printf("O representante 6 recebeu %.2f \n", comissao_vendedor6);
    printf("O representante 7 recebeu %.2f \n", comissao_vendedor7);
    printf("O representante 8 recebeu %.2f \n", comissao_vendedor8);
    printf("O representante 9 recebeu %.2f \n", comissao_vendedor9);
    printf("O representante 10 recebeu %.2f \n \n", comissao_vendedor10);

    printf("A companhia vendeu um total de %d itens, lucrando %.2f \n", total_de_itens, valor_t);
    printf("A companhia pagou um total de %.2f para os representantes \n", comissao_total);
	
	
	system("pause");
	return 0;
}
