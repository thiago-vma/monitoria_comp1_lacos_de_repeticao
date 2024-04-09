

// 10) Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.

#include <stdio.h>

void main(){

    	int num1 = 0, soma = 0;
    	float media = 0;

    	printf("Digite 10 numeros:\n");
    	
    	for (int i = 0; i < 10; i++) {
        
        	printf("Numero %d: ", i + 1);
        	scanf("%d", &num1);
    		
    		if (num1 >= 0){
    		
    			soma = soma + num1;
 
    		}	
    	}		
    	
	media = soma / 10;
	
	printf("A média é: %.2f", media);

}

