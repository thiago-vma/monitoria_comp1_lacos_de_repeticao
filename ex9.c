
// 9) Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.

#include <stdio.h>

void main() {
    
    	int num1 = 0, num2 = 999999999; 
    	int menor = 999999999, maior = 0; //inicializo o menor com o maior valor possível, pois assim garanto que qualquer numero que o usuário entrar será menor que a inicialização

    	printf("Digite 10 numeros:\n");
    	
    	for (int i = 0; i < 10; i++) {
        
        	printf("Numero %d: ", i + 1);
        	scanf("%d", &num1);
    		
    		if (num1 >= maior){
    		
    			maior = num1;
    		
    		}
    			
    		if(num1 <= num2 && num1 < menor){
    				
    			menor = num1;
    				
    		}
    		
    		num2 = num1;
    		
    	}		

    	printf("O menor valor lido: %d\n", menor);
    	printf("O maior valor lido: %d\n", maior);

}

