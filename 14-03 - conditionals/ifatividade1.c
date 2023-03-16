#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	char sexo;
	
	printf("Digite 'M' se você for homem e 'F' se você for mulher: ");
	scanf("%c",&sexo);
	if (sexo == 'F'){
		printf("Você é mulher.");
	}
	else {
		if (sexo == 'M'){
			printf("Você é homem.");
		}
		else {
			printf("Escreva a opção corretamente.");
		}
	}
	return 0;
	
}
