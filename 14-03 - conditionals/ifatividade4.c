#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int numero;
	printf("Digite um número: ");
	scanf("%d", &numero);
	
	if ((numero % 3 == 0) && (numero % 7 == 0)) {
		printf("Seu número é divisível por 3 e 7.");
	}
	else {
		printf("Seu número não é divisível por 3 e 7.");
	}
	return 0;
}

