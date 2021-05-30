#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nomeProduto[25], Maisproduto;
	float preco, novoPreco;

	do{
		printf("\nDigite o nome do produto: ");
		scanf("%s", &nomeProduto);

		printf("Digite o preço: ");
		scanf("%f", &preco);

		if(preco != -1){
		novoPreco = preco + (preco * 0.1);
		printf("\nNovo preço do(a) %s é: %.2f\n", nomeProduto, novoPreco);
		}

	}while(preco != -1);

	return 0;
}