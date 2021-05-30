#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int numero, i, ft;

	printf("Digite um número inteiro para fatorar: ");
	scanf("%d", &numero);
	fflush(stdin);

	i=1;

	if(numero<0){
		printf("Porfavor digite somente números inteiros positivos!");
	} else if(numero==0) {
		printf("Fatorial de 0 é: 1");
	} else {
	while(i<= numero){
		ft = ft*i;
		i++;
	}}

	printf("Fatorial de %d é: %d", numero, ft);

	return 0;
}