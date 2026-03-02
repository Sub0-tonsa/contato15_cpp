/*
	Name: funcoes2.cpp 
	Author: Giovanni Tonsa
	Date: 02/03/26 10:19
	Description: Programa para demonstrar o uso de funções
*/

//Sessão de prototipação
int lerNum();
void analisarNumeros(int, int);

# include <stdio.h>

main()
{
	int a, b;
	
	//a = lerNum();
	//b = lerNum();
	analisarNumeros(lerNum(), lerNum());
}

int lerNum()
{
	int num;
	
	printf("\nDigite um numero: ");
	scanf("%d", &num);
	return num;
}

//Função para analisar qual dos dois numeros é maior
void analisarNumeros(int x, int y)
{
	if (x > y)
		printf("\nO numero maior eh o %d", x);
	else if (y > x)
		printf("\nO numero maior eh o %d", y);
		else
			printf("\nEles sao iguais");
}

