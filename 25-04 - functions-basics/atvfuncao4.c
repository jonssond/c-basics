#include <stdio.h>
#include <locale.h>

void soma(int a, int b){
	int s = a + b;
	printf("Soma: %d\n", s);
	system("pause");
}

void subtracao(int a, int b){
	int s = a - b;
	printf("Subtração: %d\n", s);
	system("pause");
}

void divisao(int a, int b){
	int s = a / b;
	printf("Divisão: %d\n", s);
	system("pause");
}

void multiplicacao(int a, int b){
	int s = a * b;
	printf("Multiplicação: %d\n", s);
	system("pause");
}
int main(){
setlocale(LC_ALL, "Portuguese");
	int op, x, y;
	
	do{
		system("cls");
		printf("****** Menu *******\n");
		printf("0 - Sair \n");
		printf("1 - Soma \n");
		printf("2 - Subtração \n");
		printf("3 - Divisão \n");
		printf("4 - Multiplicação \n");

		printf("Entre com a opção desejada: ");
		scanf("%d", &op);
		
		
		switch(op){
			case 0:
				printf("Fim do programa!!");
				break;
			case 1:
				printf("Digite o primeiro número: ");
				scanf("%d", &x);
				printf("Digite o segundo número: ");
				scanf("%d", &y);
				soma(x, y);
				break;
			case 2:
				printf("Digite o primeiro número: ");
				scanf("%d", &x);
				printf("Digite o segundo número: ");
				scanf("%d", &y);
				subtracao(x, y);
				break;
			case 3:
				printf("Digite o primeiro número: ");
				scanf("%d", &x);
				printf("Digite o segundo número: ");
				scanf("%d", &y);
				divisao(x, y);
				break;
			case 4:
				printf("Digite o primeiro número: ");
				scanf("%d", &x);
				printf("Digite o segundo número: ");
				scanf("%d", &y);
				multiplicacao(x, y);
				break;
			default:
				printf("Opção inválida!\n");
				system("pause");
		}
			
	}while(op != 0);
	
	return 0;
}
