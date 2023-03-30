#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	char sexo;
	float altura, ideal;
	
	printf("Digite 'M' se você for homem e 'F' se você for mulher: ");
	scanf("%c",&sexo);	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	if (sexo == 'F' || sexo == 'f'){
		ideal = (62.1 * altura) - 44.7;
		printf("Seu peso ideal é de: %.1f", ideal);
	}
	else {
		if (sexo == 'M' || sexo == 'm'){
			ideal = (72.7 * altura) - 58;
			printf("Seu peso ideal é de: %.1f", ideal);
		}
		else {
			("Algo deu errado.");
		}
	}
	return 0;
}
