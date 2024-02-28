#include <stdio.h>

void cabecalho () {
	system("cls || clear");
	printf("== INFORMACOES =="); 
}

int main () {
	char nome[200];
	float salario, valorTotalRe;
	float salarioMin;
	int quantidadeSaMin;
	
	printf("Informe o seu nome: ");
	scanf("%s",&nome);
	printf("Informe o seu salario: ");
	scanf("%f",&salario);
	
	salarioMin = 1.412,00;
	quantidadeSaMin = salario / salarioMin;
	valorTotalRe = salarioMin * quantidadeSaMin;
	
	printf("\nNome: %s ", nome);
	printf("\nSalario minimo: %f", salarioMin);
	printf("\nSalario recebido: %f", salario);
	printf("\nQuantidade de salarios recebidos: %.1i", quantidadeSaMin);
	printf("\nValor total recebido: %.1f", valorTotalRe);
	
	return 0;
}
