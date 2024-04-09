
// 2) Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N 
// em ordem decrescente.

#include <stdio.h>

void main() {

	int num;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);

    					
	for (int i = num; i >= 0; i--) {   // Laço "for" que percorre de 0 até o número escolhido, interando 1 a cada repetição

//aqui a lógica é parecida com o exercício 1, porém o laço é invertido, começando em "num" e descendo até 0, e perceba que a iteração é "i--", então ele vai decrescendo 1 até chegar em 0 
       	
        	printf("%d ", i); //imprimo cado iteração
        
    }

}

