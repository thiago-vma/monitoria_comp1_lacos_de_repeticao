
//	3) Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.

#include <stdio.h>

void main(){

	int num = 0, cont = 0, numero_analisado = 1;

    
   	printf("Digite um numero inteiro: ");
   	scanf("%d", &num);

    	while (cont < num) {   //estabeleço a condição que ele permanecerá no loop até chegar no valor especificado
    
    	    if (numero_analisado % 2 != 0) {   
//a cada iteração, preciso verificar se o número é par ou ímpar. Caso seja par, ele já itera a variável que analisa os números. Caso seja ímpar, entra na condicional para imprimir na tela, itera o contador que vai até "num" e depois também pula para o próximo número de qualquer forma, assim sempre garantindo o avanço do numero analisado. 
    	
    	        printf("%d ", numero_analisado);
    	        cont++;
        }
        
        numero_analisado++;
    }

	printf("\n");
}

