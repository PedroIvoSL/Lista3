#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int i, n1, n2, conta;

	printf("Digite um número inteiro para \"X\": ");
	scanf("%i", &n1);
    printf("Digite um número inteiro para \"Y\": ");
	scanf("%i", &n2);

	conta=0;

	for(i=1;i<=n1;i++){
		conta = conta + n2;
	}

	printf("Resultado: %i", conta);

	return 0;
}