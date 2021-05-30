#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	char nomeProduto[25];
	int produtos;
	float preco, novoPreco;

		printf("Digite a quantidade de produtos: ");
		scanf("%d", &produtos);

	for(int i = 0; i < produtos; i++){
		printf("\nDigite o nome do produto: ");
		scanf("%s", &nomeProduto);

		printf("Digite o preço: ");
		scanf("%f", &preco);

		novoPreco = preco + (preco * 0.1);

		printf("\nNovo preço do(a) %s é: %.2f\n", nomeProduto, novoPreco);
	}
	return 0;
}