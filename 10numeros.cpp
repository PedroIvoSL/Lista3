#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int i=0, numInteiro;

	do{
		printf("Digite um número inteiro: ");
		scanf("%d", &numInteiro);
		fflush(stdin);

		i++;
	}while(numInteiro>=0 && i<=100);

	printf("Total de valores lidos: %d", i);

	return 0;
}