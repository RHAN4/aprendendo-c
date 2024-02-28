#include <stdio.h>
#include <stdio.h>

int main () {
	char nome[200];
	int idade;
	float priNota, segNota, terNota, quaNota, media;
	
	printf("Digite o seu nome: ");
	scanf("%s",&nome);
	
	fflush(stdin);
	
	printf("Digite a sua idade: ");
	scanf("%i",&idade);
	printf("Digite a primeira nota: ");
	scanf("%f",&priNota);
	printf("Digite a sua segunda nota: ");
	scanf("%f",&segNota);
	printf("Digite a sua terceira nota: ");
	scanf("%f",&terNota);
	printf("Digite a sua quarta nota: ");
	scanf("%f",&quaNota);
	
	media = (priNota + segNota + terNota + quaNota) / 4;
	
	printf("\n=== Exibindo resultados ===\n");
	printf("Nome: %s \n", nome);
	printf("Idade: %i \n", idade);
	printf("Media: %.1f \n", media);
	
	return 0;
	
}
