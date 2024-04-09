
// 8) Faça um programa que leia 10 inteiros e imprima sua média.

#include <stdio.h>

void main(){

	int num[10]; // Array para armazenar os valores entrados pelo usuário
    	int soma = 0;
    	float media = 0;

    
    	printf("Entre com os 10 valores:\n");

    	for (int i = 0; i < 10; i++) { // de 0 a 9 temos 10 repetições
    	
        	printf("Valor %d: ", i + 1);
        	scanf("%d", &num[i]); // armazeno o valor na indexação sempre subsequente
    	}

  
    	for (int i = 0; i < 10; i++) {
    	
        	soma += num[i]; //atribuo a variável soma sempre o valor do vetor somado com o próximo obtido na iteração
    	}
    	
    	media = soma / 10;
    	
    	printf("A soma dos valores digitados é: %.2f\n", media);

}
