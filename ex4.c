
// 4) Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.

#include <stdio.h>

void main(){

	int mult = 0;
	
	for(int i = 1; i <= 5; i++){ //percorro laço em que o "i" representa o passo que multiplicará por 3
	
		mult = i * 3;
		printf("Múltiplo %d: %d\n", i, mult);
	
	}

}

