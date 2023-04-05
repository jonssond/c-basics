#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i, num, par;
	par = 0;
	
	for (i = 1; i <= 30; i++){
		printf("Digite um número (%d): ", i);
		scanf("%d", &num);
		if (num % 2 == 0){
			par += 1;
		}
	}
	printf("A quantidade de números pares foi: %d", par);
	return 0;
}

