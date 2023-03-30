#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int num1, num2, opc, res;
	
	printf("MENU DE OPÇÕES \n 1 - Somar dois números \n 2 - Multiplicar dois números \n 3 - Subtrair dois números \n 4 - Dividir dois números. \n");
	printf("Digite sua opção: ");
	scanf("%d", &opc);
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	if (opc == 1){
		res = num1 + num2;
		printf("Resultado: %d", res);
	}
	else {
		if (opc == 2){
			res = num1 * num2;
			printf("Resultado: %d", res);
		}
		else {
			if (opc == 3){
				res = num1 - num2;
				printf("Resultado: %d", res);
			}
			else {
				if (opc == 4){
					res = num1 / num2;
					printf("Resultado: %d", res);
				}
				else {
					printf("Opção inválida.");
				}
			}
		}
	}
	return 0;
}
