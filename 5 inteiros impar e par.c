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
	int i, numero, pares = 0, impares = 0;
	
	for (i = 1; i <= 5; i++) {
		printf("Digite a %iª nota: ", i);
		scanf("%i",&numero);
		
		if (numero % 2 == 1) {
        impares++;
         } else {
         	pares++;
		 }
	}
		printf("\nQuantidade de impares: %i \n", impares);
		printf("\nQuantidade de pares: %i \n", pares);
		
		return 0;
}
