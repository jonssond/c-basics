#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i, num, ant, suc;
	i = 1;
	
	do {
		printf("Digite um número: ");
		scanf("%d", &num);
		ant = num - 1;
		suc = num + 1;
		printf("Antecessor: %d \nSucessor: %d \n", ant, suc);
		i++;
	} while (i <= 5);
	return 0;
}
