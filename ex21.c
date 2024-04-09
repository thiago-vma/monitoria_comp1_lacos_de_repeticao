
// 21) Escreva um programa que leia certa quantidade de números, imprima o maior deles e quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser fornecida pelo usuário.

#include <stdio.h>

void main(){

	int quant = 0, num = 0, maior = -9999999, contagem_maior = 0; //inicializando a variavel maior para garantir que qualquer numero que ele colocar de início já será maior que o inicializado
 
	printf("Digite a quantidade de números a serem lidos: ");
    	scanf("%d", &quant);
    	
    	for (int i = 0; i < quant; i++) {
        
        	printf("Digite o número %d: ", i + 1);
        	scanf("%d", &num);
        
        	if (num > maior) { //atribuindo o maior numero a respectiva variável caso TRUE
            		
            		maior = num;
            		contagem_maior = 1; // Aqui eu atribui 1 na contagem, pois esse if considera que um novo número foi inserido no teclado, então começamos a contar novamente a quantidade de vezes que ele foi inserido
            		
        	} else{ 
        	
        		if (num == maior) {
            
            			contagem_maior++; // Incrementa a contagem do maior número
        
        		}
		}
	}

	printf("O maior número é: %d, e ele foi lido %d vezes\n", maior, contagem_maior);

}

