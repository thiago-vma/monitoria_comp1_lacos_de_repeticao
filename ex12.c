
//12) Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. Exemplo: A soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.

#include <stdio.h>

void main(){

	int num = 0, res = 0, soma = 0;
	
	printf("Digite o numero: ");
    	scanf("%d", &num);

    	
    	for (int i = 1; i < num; i++) {
        
    		res = num % i;
    		
    		if (res == 0){
    		
    			soma = soma + i;
 
    		}	
    	}		

	printf("A soma dos divisores do número %d é: %d\n", num, soma);

}

