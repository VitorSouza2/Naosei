#include <stdio.h>
#include <conio.h>

main(){
	float n1,n2,resultado;
	int nsei;
		
	printf("Informe o numero 1:\n");
	scanf("%f",n1);
	
	printf("Informe o numero 2:\n");
	scanf("%f",n2);
	
	printf("Para somar os numeros digite: 1 \n Para subtrair os numeros digite: 2 \n Para multiplicar os numeros digite: 3 \n Para fazer a divisão os numeros digite: 4 \n");
	scanf("%i",nsei);
	
	if(nsei == 1){
		resultado = n1 + n2;
		printf("O resultado de sua adicao eh: %f \n",resultado);
	}
	else if(nsei == 2){
		resultado = n1 - n2;
		printf("O resultado de sua subtracao eh: %f \n",resultado);
	}
		else if(nsei == 3){
			resultado = n1 * n2;
			printf("O resultado de sua multicacao eh: %f \n",resultado);
		}
			else if(nsei == 4){
			resultado = n1 / n2;
			printf("O resultado de sua divisao eh: %f \n",resultado);
			}
}
