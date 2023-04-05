#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i, num, ant, suc;
	
	for (i = 1; i <= 5; i++){
		printf("Digite um número: ");
		scanf("%d", &num);
		ant = num - 1;
		suc = num + 1;
		printf("Antecessor: %d \nSucessor: %d \n", ant, suc);
	}
	return 0;
}
