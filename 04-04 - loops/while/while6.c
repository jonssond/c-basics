#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i, num, ant, suc;
	i = 1;
	
	
	while (i <= 5){
		printf("Digite um n�mero: ");
		scanf("%d", &num);
		ant = num - 1;
		suc = num + 1;
		printf("Antecessor: %d \nSucessor: %d \n", ant, suc);
		i++;
	}
	return 0;
}
