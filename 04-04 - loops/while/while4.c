#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i;
	i = 500;
	
	while (i >= 1){
		printf("%d \n", i);
		i--;
	}
	return 0;
}
