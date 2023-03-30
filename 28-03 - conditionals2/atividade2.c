#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int opc1;
	
	printf("Digite o código do seu cargo: ");
	scanf("%d", &opc1);
	if (opc1 == 1){
		printf("Voce é escrituário. ");
	}
	else {
		if (opc1 == 2){
			printf("Voce é secretario.");	
		}
		else {
			if (opc1 == 3){
				printf("Voce é caixa.");
			}
			else {
				if (opc1 == 4){
					printf("Você é gerente. ");
				}
				else {
					if (opc1 == 5){
						printf("Você é diretor.");
					}
					else {
						printf("Opção inválida. ");
					}
				}
			}
		}
	}
	return 0;
}
