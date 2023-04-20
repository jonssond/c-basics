#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int num, adv, i;
	i = 1;
	
	printf("======= REGRAS DO JOGO ======= \n O primeiro jogador deverá digitar um número \ninteiro de 0 a 50, e o segundo jogador terá 15 tentativas para adivinhar. \n\n");
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
	while (i <= 15) {
		printf("Tentativa nº%d, tente acertar o número: ", i);
		scanf("%d", &adv);
		if (adv == num) {
			printf("Parabéns! Você acertou o número.");
			break;
		}
		else {
			if (adv == num - 5 || adv == num + 5) {
				printf("Você está perto! Continue tentando. \n");
			}
		}
		i++;
	}
	if (i > 15) {
		printf("Você ultrapassou o número de tentativas. Você perdeu.");
	}
	return 0;
}

