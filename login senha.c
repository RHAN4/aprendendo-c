#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void cabecalho () {
	system ("cls || clear");
	printf ("== SENAI ==\n");
	fflush(stdin);
}
int main() {
	setlocale(LC_ALL, "");
	char login[100], senha[100];
	char loginCa[100] = "bianca", senhaCa[100] = "123";
	
	cabecalho();
	printf("Digite o login: ");
	scanf("%s",&login);
	printf("Digite a senha: ");
	scanf("%s",&senha);
	
	if (strcmp(login, loginCa) == 0 && strcmp(senha, senhaCa) == 0) {
		printf("\nBem vindo!");
		
	} else {
		printf("\nLogin ou senha inválido."); 
	}
	return 0;
}
