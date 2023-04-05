#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i, num, par;
	i = 1;
	par = 0;
	
	while (i <= 30){
		printf("Digite um número (%d): ", i);
		scanf("%d", &num);
		if (num % 2 == 0){
			par += 1;
		}
		i++;
	}
	printf("A quantidade de números pares foi: %d", par);
	return 0;
}
