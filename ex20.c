
// Exercício 20: calcular E = 1/1! + 1/2! + 1/3! + ... + 1/N!

#include <stdio.h>

void main(){

	int n = 0, fatorial = 1;
 	float E = 0;

    	printf("Entre com  o valor N: ");
    	scanf("%d", &n);


    	for (int i = 1; i <= n; i++) {
        
        	fatorial *= i; // vai acumulando a multiplicação dos números anteriores a i
        	
        	E += 1.0 / fatorial;
   
    }

    printf("O valor de E é: %.2f\n", E);
    
}

