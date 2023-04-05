#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i;
	i = 500;
	
	do {
		printf("%d \n", i);
		i--;
	} while (i >= 1);
	return 0;
}
