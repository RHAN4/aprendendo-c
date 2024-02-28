#include <stdio.h>

int main () {
	int numero;
	
	printf("Digite o numero: ");
	scanf("%i",&numero);
	
	if (numero % 2 == 0) {
		printf("Numero par.");
		} else {
			printf("Numero impar.");
		}
		
	return 0;
}
