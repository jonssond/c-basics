#include <stdio.h>
#include <locale.h>

void cadastro(float alt[5], float pes[5]){
	int i;
	printf("Cadastro de pessoas: \n");
	for (i = 0; i < 5; i++){
		printf("Digite a altura da pessoa[%d]: ", i);
		scanf("%f", &alt[i]);
		printf("Digite o peso da pessoa[%d]: ", i);
		scanf("%f", &pes[i]);
	}
}

void exibe(float alt[5], float pes[5]){
	int i;
	float imc;
	printf("Exibindo o IMC das pessoas: \n");
	for (i = 0; i < 5; i++){
		imc = pes[i] / (alt[i] * alt[i]);
		printf("IMC da pessoa[%d]: %.2f \n", i, imc);
	}
}
int main(){
setlocale(LC_ALL, "Portuguese");
	
	float altura[5], peso[5];
		
	cadastro(altura, peso);
	exibe(altura, peso);	
	return 0;
}

