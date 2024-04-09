
// 5) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

#include <stdio.h>

void main(){

	int soma = 0, num_par = 2;
// a variavel num_par representa a memória que receberá os valores pares, por isso já começa com o primeiro

    	for(int i = 1; i <= 50; i++) { 
    	
        	soma = soma + num_par; // incremento a soma
        	num_par = num_par + 2; // Incrementa para o próximo número par
        	
    }

    	printf("A soma dos 50 primeiros numeros pares é: %d\n", soma);
    	
}

