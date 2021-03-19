#include<stdio.h>
#include<stdlib.h>

int main(){
	float n1,n2,conta;
	char calculador;
	printf("digite o primeiro numero: \n");
	scanf("%f",&n1);
	printf("digite o segundo numero: \n");
	scanf("%f",&n2);
	printf("\n calculador desejado: \n");
	scanf("%s",&calculador);
	//colocando as operações
	if(calculador== '+') {
	conta=n1+n2; 
	printf("\n a conta deu:%.2f",conta);
}
   else
   if(calculador== '-') {
   conta=n1-n2;
   printf("\n a conta deu:%.2f",conta);
}
    else
    if(calculador=='/') {
    conta=n1/n2;
    printf("\n a conta deu:%.2f", conta);
	}
	else 
	if(calculador=='*') {
	conta=n1*n2;
	printf("\n a conta deu:%.2f",conta);
	}
	 
	 system("Pause");
	 return 0;
	
}