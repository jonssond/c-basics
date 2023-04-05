#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i, soma;
	soma = 0;
	
	for (i = 1; i <= 10; i++){
		soma += i;
		printf("%d \n", soma);
	}
	return 0;
}
