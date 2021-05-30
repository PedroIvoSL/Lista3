#include<stdio.h>
#include<locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");

	int numero, formula, i;

	printf("Digite o número que você deseja fatorar: \n");
	scanf("%i", &numero);

	formula=1;

	if(numero<0){
		printf("Porfavor digite somente números positivos!");
	} else if(numero==0) {
		printf("A fatoração de 0 e igual a: 1");
	} else {
		for(i=1;i<=numero;i++){
			formula = formula*i;
		}
		printf("A fatoração de %d e igual a: %i",numero ,formula);
	}
	return 0;
}