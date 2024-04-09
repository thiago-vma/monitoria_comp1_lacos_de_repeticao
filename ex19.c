
// Exercício 19

#include <stdio.h>

void main(){

	float S = 0;
	float numerador = 1, denominador = 1;

	while (numerador <= 99 && denominador <= 55) {

	        S += (numerador / denominador);
	        numerador += 2; //incrementa com passo 2, ou seja, de 2 em 2
	        denominador++; // incremento com passo 1
	        
	}

	printf("O valor da somatória S é: %.2f\n", S);

}

