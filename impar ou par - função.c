#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void ParOuImpar(int numero) {
	if (numero % 2 == 0) {
	printf("\nNúmero par.");
	} else {
		printf("\nNúmero impar.");
	}
}
int main () {
	setlocale(LC_ALL, "");
	int numero, i;
	
	printf("Digite o número desejado: ");
	scanf("%i",&numero);
	
	printf("\nResultado: ");
	ParOuImpar(numero);
	
	return 0;
	
}
