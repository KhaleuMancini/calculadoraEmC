#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float n1;
	float n2;
	int op;
	int cont;
	float res;
	cont = 1;
while (cont==1) {
		printf("\n-------------------------\n");
		printf("------ CALCULADORA ------\n");
		printf("-------------------------\n");
		printf("Digite o primeiro número: ");
		scanf("%f", &n1);
		printf("Digite o segundo número: ");
		scanf("%f", &n2);
		printf("-------------------------\n\n");
		printf("------- OPERACOES -------\nSoma[1]\nSubtração[2]\nMultiplicação[3]\nDivisão[4]\n: ");
		scanf("%d", &op);
		printf("-------------------------\n");
		switch(op){
			case 1:
				res=n1+n2;
				break;
			case 2:
				res=n1-n2;
				break;
			case 3:
				res=n1*n2;
				break;
			case 4:
				res=n1/n2;
				break;
		}
		if(op>4){
			printf("Digite uma operação que exista");
			cont=0;
		}
		else if(op<1){
			printf("Digite uma operação que exista");
			cont=0;
		}
		else{
			printf("------- RESULTADO -------");
			printf("\nO resultado da operação foi: %.2f \n", res);
			printf("-------------------------\n");
			printf("\nDeseja fazer outra operação:\nSim[1]\nNão[0]\n: ");
			scanf("%d", &cont);
		}
	}
	return 0;
}
