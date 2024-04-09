
// 17) Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd:

#include <stdio.h>

void main(){

	int n_linha = 0, n_base = 1;
	
	printf("Entre com o número de linhas desejadas: ");
	scanf("%d", &n_linha);

	for (int i = 1; i <= n_linha; i++) {
        
        	for (int j = 1; j <= i; j++) {
        
        	    printf("%d ", n_base);
        	    n_base++;
        
      		}
        
        printf("\n");
	
	}
}

