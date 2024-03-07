#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float converter(float numero) {
	float conversao;	
	conversao = numero * 100;
	return conversao;
}

int main () {
	setlocale(LC_ALL, "");
	float numeroMe, resultado;
	
	printf("Digite o valor em metros: ");
	scanf("%f",&numeroMe);
	
	resultado = converter (numeroMe);
	
	printf("Resultado: %.1f cm. \n", resultado);
	
	return 0;
	
}
