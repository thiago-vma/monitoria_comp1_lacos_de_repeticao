
// 16) Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Apresente um programa que calcule o valor de qualquer Hn.

#include <stdio.h>

void main(){

	int num = 0; 
	float h = 0;	
	
	printf("Entre o n-ésimo termo desejado da série harmônica: ");
	scanf("%d", &num);
	
	for(int i = 1; i <= num; i++){
	
		h = h + (1.0 / i);
	
	}

	printf("Hn = %f\n", h);
}

