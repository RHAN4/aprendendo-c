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
	int nota, soma, i;
	
	for (i = 1; i <= 5; i++) {
		printf("Digite a %i� nota: ", i);
		scanf("%i",&nota);
		
		soma = soma + nota;
	}
	
	cabecalho ();
	printf("\nSoma: %i \n", soma);
	
	return 0;
	}
