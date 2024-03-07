#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int adicao(int n1, int n2) {
	int mais;
	mais = n1 + n2;
	return mais;
}

int subtracao(int n1, int n2) {
	int menos;
	menos = n1 - n2;
	return menos;
}

int divisao(int n1, int n2) {
	int por;
	por = n1 / n2;
	return por;
}

int multiplicacao(int n1, int n2) {
	int vezes;
	vezes = n1 * n2;
	return vezes;
}

int main () {
	setlocale(LC_ALL, "");
	int i, priNumero, segNumero;
	int somaRe, subRe, multRe, divRe;
	
	printf("\nDigite o primeiro número: ");
	scanf("%i",&priNumero);
	
	printf("\nDigite o segundo número: ");
	scanf("%i",&segNumero);
	
	somaRe = adicao(priNumero, segNumero);
	subRe =  subtracao(priNumero, segNumero);
	multRe = multiplicacao(priNumero, segNumero);
	divRe = divisao(priNumero, segNumero);
	
	printf("\nSoma: %i", somaRe);
	printf("\nSubtração: %i", subRe);
	printf("\nMultiplicação: %i", multRe);
	printf("\nDivisão: %i", divRe);
	
	return 0;
	
}
