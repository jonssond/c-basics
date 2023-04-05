#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int i;
	i = 5;
	
	while (i <= 200){
		printf("%d \n", i);
		i++;
	}
	return 0;
}
