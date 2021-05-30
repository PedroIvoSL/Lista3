#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int idade, maiorIdade, i=1;
	char sexo, corOlhos[9], corCabelos[9];
	float porcentagem, femLoiraOlhosVerdes=0;

	do{
		printf("\nDigite o sexo da %dª pessoa [F|M]: ", i);
		scanf("%s", &sexo);
		fflush(stdin);

		sexo = toupper(sexo);

		printf("\nDigite a cor dos olhos da %dª pessoa (azuis, verdes, castanhos ou pretos): ", i);
		fgets(corOlhos, 9, stdin);
		fflush(stdin);

		printf("\nDigite a cor dos cabelos da %dª pessoa (loiros, castanhos ou pretos): ", i);
		fgets(corCabelos, 9, stdin);
		fflush(stdin);

		printf("\nDigite a idade da %dª pessoa: ", i);
		scanf("%d", &idade);
		fflush(stdin);

		if((idade>=18 || idade <=35) && sexo=='F'&& strcmp(corOlhos, "verdes")==1 && strcmp(corCabelos, "loiros")==1)
			femLoiraOlhosVerdes++;

		if(i==1)
			maiorIdade = idade;
		if(maiorIdade<idade)
			maiorIdade = idade;

		i++;
	}while(idade>=0);

	porcentagem = (femLoiraOlhosVerdes/i)*100;

	printf("\nA maior idade dos habitantes pesquisados é: %d", maiorIdade);
	printf("\nA porcentagem de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos e que tenham olhos verdes e cabelos loiros é: %.1f%", porcentagem);

	return 0;
}