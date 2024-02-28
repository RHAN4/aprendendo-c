#include <stdio.h>

void cabecalho () {
	system("cls || clear");
	printf("\n === SENAI ===");
	
}
int main() {
	char nome[200];
	int idade;
	float media, priNota, segNota, terNota;
	
	cabecalho();
	printf("\nDigite o seu nome: ");
	scanf("%s",&nome);
	printf("\nDigite a sua idade: ");
	scanf("%i",&idade);
	printf("\nDigite a sua primeira nota: ");
	scanf("%f",&priNota);
	printf("\nDigite a sua segunda nota: ");
	scanf("%f",&segNota);
	printf("\nDigite a sua terceira nota: ");
	scanf("%f",&terNota);
	
	media = (priNota + segNota + terNota) / 3;
	
	if (media >= 7) {
		printf("\nAprovado.");
	} else {
		printf("\nReprovado.");
	}
	
	printf("\nNome: %s \n", nome);
	printf("\nIdade: %i \n", idade);
	printf("\nMedia: %.1f \n", media);
	
	return 0;
}
