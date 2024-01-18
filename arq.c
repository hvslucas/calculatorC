#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int menu();
float soma(float num1, float num2){return num1+num2;};
float sub(float num1, float num2){return num1-num2;};
float mult(float num1, float num2){return num1*num2;};
float divs(float num1, float num2){return num1/num2;};

int main(){
	int n, opcao;
	float num1, num2, result;
	for(n=0; n<5; n++){
		opcao = menu();
		
		if(opcao == 5){
			break;
		}
			
		printf("Digite o primeiro numero: ");
		scanf("%f", &num1);
		fflush(stdin);
		printf("Digite o segundo numero: ");
		scanf("%f", &num2);
		fflush(stdin);
		
		if(opcao == 1)
			result = soma(num1, num2);
			
		if(opcao == 2)
			result = sub(num1, num2);
			
		if(opcao == 3)
			result = mult(num1, num2);
			
		if(opcao == 4)
			result = divs(num1, num2);
			
		printf("%.2f \n", result);
		system("pause");
	}
}

int menu(){
	int vop = 0;
	system("cls");
	printf("\n--------------------------------------");
	printf("\n");
	printf("\n Escolha uma opcao de operacao ");
	printf("\n");
	printf("\n1 - Soma              2 - subtracao");
	printf("\n3 - multiplicacao     4 - divisao");
	printf("\n      5 - Cancelar o programa");
	printf("\n");
	printf("\n---------------------------------------\n");
	scanf("%d", &vop);
	if(vop < 1 || vop > 5){
		printf("\nEscolha uma opcao valida: ");
		scanf("%d", &vop);
		if(vop < 1 || vop > 5)
			exit(0);
	}
	return vop;
}

//float soma(float num1, float num2){
//	return num1 + num2;
//}
//
//float sub(float num1, float num2){
//	return num1 - num2;
//}
//
//float mult(float num1, float num2){
//	return num1*num2;
//}
//
//float divs(float num1, float num2){
//	return num1/num2;
//}
