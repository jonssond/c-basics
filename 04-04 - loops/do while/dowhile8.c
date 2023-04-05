#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i, soma;
	i = 1;
	soma = 0;
	
	do {
		soma += i;
		printf("%d \n", soma);
		i++;
	} while (i <= 10);
	return 0;
}
