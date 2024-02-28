#include <stdio.h>

int main () {
	int numero, numeroAnt, numeroSuc;
	
	printf("Digite o numero desejado: ");
	scanf("%i",&numero);
	
	numeroAnt = numero - 1;
	numeroSuc = numero + 1;
	
	printf("Numero antecessor: %i \n", numeroAnt);
	printf("Numero sucessor: %i \n", numeroSuc);
	
	return 0;
}
