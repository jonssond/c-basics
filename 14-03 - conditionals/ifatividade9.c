#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	float salario, novosalario;
	
	printf("Digite seu salário: ");
	scanf("%f", &salario);
	if (salario <= 300) {
		novosalario = salario * 35 / 100 + salario;
		printf("Seu novo salário é: %.2f.", novosalario);
	}
	else {
		novosalario = salario * 15 / 100 + salario;
		printf("Seu novo salário é: %.2f", novosalario);
	}
	return 0;
}

