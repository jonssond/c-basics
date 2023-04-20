#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int num, adv, tentativa;
	tentativa = 1;
	
	printf("========== REGRAS DO JOGO ========== \n O primeiro jogador deverá digitar um número \ninteiro de 0 a 50, e o segundo jogador terá tentativas ilimitadas para adivinhar. \n\n");
	printf("Jogador nº1, digite o número a ser adivinhado: ");
	scanf("%d", &num);
	if (num > 50) {
		printf("Número maior do que 50!");
		return 0;
	}
	else {
		if (num < 0) {
			printf("Número menor que 0!");
			return 0;
		}
	}
	system("cls");
	while (num != adv) {
		printf("Jogador nº2, tente acertar o número: ");
		scanf("%d", &adv);
		if (adv == num) {
			printf("Parabéns! Você acertou o número.");
		}
		else {
			tentativa += 1;
		}
	}

	printf("\nO número de tentativas foi de: %d", tentativa);
	return 0;
}

