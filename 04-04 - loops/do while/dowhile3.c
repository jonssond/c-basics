#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i;
	i = 5;
	
	do {
		printf("%d \n", i);
		i++;
	} while (i <= 500);
	return 0;
}
