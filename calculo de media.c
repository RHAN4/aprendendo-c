#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void cabecalho () {
	system ("cls || clear");
	printf("== SENAI ==\n");
	fflush(stdin);
}

int main () {
	setlocale(LC_ALL, "");
	int i, nota, media, soma;
	
	for (i = 1; i <= 4; i++) {
		printf("Digite a %iª nota: ", i);
		scanf("%i",&nota);
			
		soma = soma + nota;
		
	}
	
	media = soma / 4;
	
	printf("\nMédia: %i \n", media);
	
	return 0; 
}
