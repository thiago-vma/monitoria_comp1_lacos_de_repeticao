
// 14) Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

#include <stdio.h>

void main(){

	int num = 0;
	int t0 = 0, t1 = 1, t3;
	
	printf("Entre com o valor desejado: ");
	scanf("%d", &num);
	
	for(int i = 1; i < num; i++){
	
		t3 = t0 + t1;
		t0 = t1;
		t1 = t3;
	
	}

	printf("O %d-ésimo termo é (começa na ordem 0): %d\n", num, t3);
}

