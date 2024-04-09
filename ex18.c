
// 18) Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido é primo ou não.

#include <stdio.h>

void main(){
	
	int num = 0;
	int primo = 1; // Usamos a estratégio de que o número será primo e analisaremos o contrário

    	printf("Digite um número inteiro maior que 1: ");
    	scanf("%d", &num);

    	for (int i = 2; i < num; i++) {
        	
        	if (num % i == 0) {
        	
        	    primo = 0; // Usamos uma flag, para sinalizar que NÂO é primo, caso seja  divisível
            	    break; 
        	
        	}
    	}

    	// Agora analisamos qual a situação da flag
    	if (num > 1 && primo == 1) {
    	
    	    printf("%d é um número primo.\n", num);
    	
    	} else {
        
        printf("%d não é um número primo.\n", num);
   	}

}

