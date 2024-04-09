
// 11) Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

#include <stdio.h>

void main(){

	int num =0, res = 0;
	
	printf("Digite o numero: ");
    	scanf("%d", &num);
    	
    	printf("Os divisores do número %d são:\n", num);
    	
    	for (int i = 1; i <= num; i++) {
        
    		res = num % i;
    		
    		if (res == 0){
    		
    			printf("%d ", i);
 
    		}	
    	}		

	printf("\n");
}

