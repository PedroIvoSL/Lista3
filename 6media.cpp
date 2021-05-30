#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	char sexo;
	int notas, alunos, contador, mediaM, mediaF, notasM=0, notasF=0, alunosM=0, alunosF=0;

	printf("Digite a quantidade de alunos: ");
	scanf("%d", &alunos);
	fflush(stdin);

	for(contador=1;contador<=alunos;contador++) {
		do {
			printf("Digite o sexo do aluno %d: ", contador);
			scanf("%c", &sexo);
			sexo=tolower(sexo);
			fflush(stdin);
			printf("Digite a nota do aluno %d: ", contador);
			scanf("%d", &notas);
			fflush(stdin);
	} while(sexo!='m' && sexo!='f');
		if(sexo=='m') {
			alunosM++;
			notasM=notas;
			mediaM=notasM/alunosM;
		} else if(sexo=='f') {
			alunosF++;
			notasF=notas;
			mediaF=notasF/alunosF;
		}
	}
	printf("A nota média masculina é: %d\n", mediaM);
	printf("A nota média feminina é: %d\n", mediaF);
return 0;
}