#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int abacaxi, maca, pera, fruta, qntAbacaxi, qntMaca, qntPera;

	do{

		printf("Frutas disponiveis:\n 1- Abacaxi. \n 2- Maçã. \n 3- Pera.\n 4- Sair \n");
		scanf("%d", &fruta);

		switch(fruta){
			case 1: printf("Quantos abacaxis, voce deseja comprar?:");
					scanf("%d", &qntAbacaxi);
					break;

			case 2:printf("Quantas maças, voce deseja comprar?:");
					scanf("%d", &qntMaca);
					break;

			case 3:printf("Quantas peras, voce deseja comprar?:");
					scanf("%d", &qntPera);
					break;

			case 4:printf("\nEncerrado\n");
					default: printf("Opção inválida");
		}

	}while(fruta != 4);

	printf("\nQuantidade de abacaxi: %d", qntAbacaxi);
	printf("\nQuantidade de maçã: %d", qntMaca);
	printf("\nQuantidade de pera: %d", qntPera);


	return 0;

}