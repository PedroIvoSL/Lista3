#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int menor,count= 0,altura;

	count = 1;

	while(count<=10){
		printf("Digite a altura da pessoa \"%d\" em centímetros: ", count);
		scanf("%d",&altura);
		fflush(stdin);
			if(altura<0){
				printf("Altura inválida! porfavor informe a altura da %dª em centímetros!:", count);
				scanf("%d", &altura);
				fflush(stdin);}
			else {
				if(count == 1)
					menor = altura;
				if(menor > altura)
					menor = altura;}
		count++;
	}
	printf("\nA Menor Altura é: %d\n",menor);

	return 0;
}