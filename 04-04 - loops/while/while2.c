#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i;
	i = 1;
	
	while (i <= 1000){
		printf("%d \n", i);
		i++;
	}
	return 0;
}
