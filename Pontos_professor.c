#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int meses_cargo = 0, meses_lotacao = 0, meses_carreira_adjunto = 0, meses_carreira_titular = 0, magisterio = 0;
	int valor_mes_cargo = 0, valor_mes_lotacao = 0, valor_mes_carreira_adjunto = 0, valor_mes_carreira_titular = 0;
	float valor_mes_magisterio, total1 = 0, total2 = 0;
	int opcao;
	system("color 5F");
	printf("\n Programa para calcular pontuacao de professores\n\n\n");
	printf(" por favor informe o valor dos campos abaixo:\n");
	printf(" MESES NO CARGO: ");
	scanf("%i", &meses_cargo);
	if(meses_cargo < 0){
		printf("ERRO #001: Por favor, digite um numero inteiro!");
		system("cls");
		main();
	}
	printf(" MESES NA LOTACAO: ");
	scanf("%i", &meses_lotacao);
	if(meses_lotacao < 0){
		printf("ERRO #001: Por favor, digite um numero inteiro!");
		system("cls");
		main();
	}
	printf(" MESES NA CARREIRA ADJUNTO: ");
	scanf("%i", &meses_carreira_adjunto);
	if(meses_carreira_adjunto < 0){
		printf("ERRO #001: Por favor, digite um numero inteiro!");
		system("cls");
		main();
	}
	printf(" MESES NA CARREIRA TITULAR: ");
	scanf("%i", &meses_carreira_titular);
	if(meses_carreira_titular < 0){
		printf("ERRO #001: Por favor, digite um numero inteiro!");
		system("cls");
		main();
	}
	printf(" MAGISTERIO: ");
	scanf("%i", &magisterio);
	if(magisterio < 0){
		printf("ERRO #001: Por favor, digite um numero inteiro!");
		system("cls");
		main();
	}
	
	valor_mes_cargo = meses_cargo * 6;
	valor_mes_lotacao = meses_lotacao * 5;
	valor_mes_carreira_adjunto = meses_carreira_adjunto * 1;
	valor_mes_carreira_titular = meses_carreira_titular * 3;
	valor_mes_magisterio = magisterio * 0.5;
	
	total1 = valor_mes_cargo+valor_mes_lotacao+valor_mes_carreira_adjunto+valor_mes_carreira_titular+valor_mes_magisterio;
	total2 = valor_mes_cargo+valor_mes_carreira_titular+valor_mes_magisterio;
	printf("\n\n SOMA_1 = %.1f\n", total1);
	printf(" SOMA_2 = %.1f", total2);
	
	printf("\n\n\n Fim do programa\n");
	printf(" Repetir? 1(sim) - 2(nao): ");
	scanf("%i", &opcao);
	if(opcao == 1){
		system("cls");
		main();
	}else {
		exit(0);
	}
	
	
}
