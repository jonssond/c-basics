#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i;
	i = 1;
	
	do {
		printf("%d \n", i);
		i++;
	} while (i <= 1000);
	return 0;
}
