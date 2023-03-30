#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if (idade < 16){
		printf("Você é não-eleitor.");
	}
	else {
		if (idade >= 18 && idade <= 65){
			printf("Você é eleitor obrigatório.");
		}
		else {
			printf("Você é eleitor facultativo.");
		}
	}
	return 0;
}
