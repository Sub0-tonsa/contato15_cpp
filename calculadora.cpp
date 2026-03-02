/*
	Name: calculadora.cpp
	Author: Giovanni tonsa
	Date: 02/03/26 10:56
	Description: Programa para executar as 4 operaçoes matematicas basicas
*/

//Sessão de prototipação
int somar(int, int);
int subtrair (int, int);
int multiplicar (int, int);
float dividir (int, int);
int potencia(int, int);
void linha();
int lerNum();

# include <stdio.h>
# include <windows.h>
//# include <math.h>
main()
{
	int menu = 0;
	int a, b, result;
	float resultF;
	puts("Calculadora - Escolha a sua opcao!");
	linha();
	printf(" 1- Adicao\n 2-Subtrair\n 3- multiplicar\n 4- dividir\n 5- potencia\n 6- sair...\n");
	linha();
	
	printf("Opcao: "); 
	scanf("%d", &menu);
	
	switch (menu)
	{
		case 1: a = lerNum();
				b = lerNum();
				result = somar(a,b);
				printf("A soma dos valores eh: %d", result);
				break;
		case 2: a = lerNum();
				b = lerNum();
				result = subtrair(a,b);
				printf("A subtracao dos valores eh: %d", result);
				break;
		case 3: a = lerNum();
				b = lerNum();
				result = multiplicar(a,b);
				printf("A multiplicacao dos valores eh: %d", result);
				break;
		case 4: a = lerNum();
				b = lerNum();
				resultF = dividir(a,b);
				printf("A divisao dos valores eh: %.4f", resultF);
				break;
		case 5: a = lerNum();
				b = lerNum();
				result = potencia(a,b);
				printf("A potenciacao de %d elevado a %d eh: %d", a, b, result);
				break;
		case 6: exit(0);
		default : puts("Opcao invalida!!!");
	}
}

//Função para realiza uma soma de dois numero inteiros

int somar(int num1, int num2)
{
	return num1 + num2;
}

//Função para realiza uma subtração de dois numero inteiros

int subtrair(int num1, int num2)
{
	return num1 - num2;
}

//Função para realiza uma multiplicação de dois numero inteiros

int multiplicar(int num1, int num2)
{
	return num1 * num2;
}
//Função para realiza uma divisão de dois numero inteiros

float dividir (int num1, int num2)
{
	return (float) num1 / num2; // casting
}

//Função para realiza uma potencia de dois numero inteiros

int potencia (int base, int exp)
{
	int pot = 1;
	for(exp; exp > 0; exp--)
		pot = pot * base;
	
	
	return pot;
}

void linha()
{
	puts("----------------------------------");
}

int lerNum()
{
	int num;
	
	printf("\nDigite um numero: ");
	scanf("%d", &num);
	return num;
}

