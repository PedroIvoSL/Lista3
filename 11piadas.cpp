#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	char nomeFinalista1[60], nomeFinalista2[60], nomeFinalista3[60], vencedor[60];
	int i, qntJuizes, nota, nota1=0, nota2=0, nota3=0, maiorNota;

	printf("Digite a quantidade de juízes presentes no dia: ");
	scanf("%d", &qntJuizes);
	fflush(stdin);

	printf("Digite o nome do primeiro finalista:  ");
	fgets(nomeFinalista1, 60, stdin);
	fflush(stdin);

	printf("Digite o nome do segundo finalista:  ");
	fgets(nomeFinalista2, 60, stdin);
	fflush(stdin);

	printf("Digite o nome do terceiro finalista:  ");
	fgets(nomeFinalista3, 60, stdin);
	fflush(stdin);

	i=1;
		do{
			printf("%dº juiz, digite a nota do %s:", i, nomeFinalista1);
			scanf("%d", &nota);
			fflush(stdin);

			do{
				if(nota<0 || nota>100){
					printf("Nota inválida! Favor informar nota entre 0 e 100: ");
					scanf("%d", &nota);
					fflush(stdin);
				}
			}while(nota<0 || nota>100);

			nota1= nota1 + nota;

			printf("%dº juiz, digite a nota do %s:", i, nomeFinalista2);
			scanf("%d", &nota);
			fflush(stdin);

			do{
				if(nota<0 || nota>100){
					printf("Nota inválida! Favor informar nota entre 0 e 100: ");
					scanf("%d", &nota);
					fflush(stdin);
				}
			}while(nota<0 || nota>100);

			nota2= nota2 + nota;

			printf("%dº juiz, digite a nota do %s:", i, nomeFinalista3);
			scanf("%d", &nota);
			fflush(stdin);

			do{
				if(nota<0 || nota>100){
					printf("Nota inválida! Favor informar nota entre 0 e 100: ");
					scanf("%d", &nota);
					fflush(stdin);
				}
			}while(nota<0 || nota>100);

			nota3= nota3 + nota;

			i++;

		}while(i<=qntJuizes);

			if(nota3>nota2 && nota3>nota1){
				strcpy(vencedor, nomeFinalista3);
				maiorNota = nota3;
				} else if(nota2>nota3 && nota2>nota1){
					strcpy(vencedor, nomeFinalista2);
					maiorNota = nota2;
					} else if(nota1>nota2 && nota1>nota3){
						strcpy(vencedor, nomeFinalista1);
						maiorNota = nota1;
						}

			printf("Nota do finalista 1 - %s: %d\n", nomeFinalista1,nota1);
			printf("Nota do finalista 2 - %s: %d\n", nomeFinalista2,nota2);
			printf("Nota do finalista 3 - %s: %d\n", nomeFinalista3,nota3);
			printf("O vencedor do concurso de piadas é: %s\nCom o total de pontos: %d", vencedor, maiorNota);

	return 0;
}