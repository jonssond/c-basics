#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	float peso, exc, multa;
	
	printf("Digite a quantidade em quilos de peixes pescados: ");
	scanf("%f", &peso);
	if (peso > 50){
		exc = peso - 50;
		multa = exc * 4.0;
		printf("O excesso foi de %.1fkg e a multa foi de R$%.2f.", exc, multa);
	}
	else {
		printf("O excesso foi de %.1f e a multa foi de R$%.1f.", exc, multa);
	}
	return 0;
}
