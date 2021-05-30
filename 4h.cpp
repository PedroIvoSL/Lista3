#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	float H, N, I;

	printf("Digite o valor de \"N\": ");
	scanf("%f",&N);

	H=0;

	if(N<0 or N==0){
		printf("Porfavor digite apenas números positivos e diferente de 0!");
        }else {
		for(I=1;I<=N;I++){
			H = H + (1/I);
		}
	printf("\nResultado: %.2f\n",H);
	}

	return 0;
}