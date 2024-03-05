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
	int i;
    
    for (i = 1; i <= 15; i++) {
    if (i % 2 == 1) {
        printf("%d \n", i);
         }
    }

    return 0;
}

