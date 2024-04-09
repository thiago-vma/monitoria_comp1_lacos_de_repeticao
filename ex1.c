
// 1) Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N 
// em ordem crescente.
#include <stdio.h>

void main(){

	int num;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);

    					
	for (int i = 0; i <= num; i++) {   // Laço for que percorre de 0 até o número escolhido, interando 1 a cada repetição
        	
        	printf("%d ", i); //imprimo cado iteração
        
    }
}

