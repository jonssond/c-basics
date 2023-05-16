#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int cont, i;
	int gabarito[13], aposta[14];
	
	printf("Entrada do gabarito: \n");
	for (i = 0; i < 13; i++){
		printf("Digite o resultado[%d]: ", i);
		scanf("%d", &gabarito[i]);
		fflush(stdin);
	}
	printf("Digite o número do apostador: ");
	scanf("%d", &aposta[13]);
	printf("Insira as respostas: \n");
	for (i = 0; i < 13; i++){
		printf("Digite a aposta[%d]: ", i);
		scanf("%d", &aposta[i]);
		fflush(stdin);
	}
	cont = 0;
	for (i = 0; i < 13; i++){
		if (aposta[i] == gabarito[i]){
			cont += 1;
		}
	}
	printf("O jogador %d fez %d pontos \n", aposta[14], cont);
	if (cont == 13){
		printf("Ele ganhou!!!");
	}
	else {
		printf("Ele perdeu.");
	}
	return 0;
}

