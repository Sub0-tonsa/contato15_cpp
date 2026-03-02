/*
	Name: Funcoes.cpp
	Author: Giovanni Tonsa
	Date: 02/03/26 09:47
	Description: Programa para demonstrar a ultilização de funções
*/

# include <stdio.h>
// Sessão de prototipação
void linha(); // Assinatura da função
void linha2(int);

main()
{
	linha2(20);
	linha(); //invoke
	puts("Texto");
	linha2(10);
	linha2(50);
	linha2(89);
	linha2(36);
}

void linha()
{
	puts("--------------------------");
}

void linha2(int x)
{
	printf("\n");
	for(x; x > 0; x--)
		printf("-");
}
