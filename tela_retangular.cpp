//tela_retangular.cpp
#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
//constante
#define tempo 5

void linha(char car, int numcol){
   printf("+");
	
	for(int i=0; i<numcol ;i++){
		printf("%c", car);
		Sleep(tempo);
     }
     
     printf("+\n");	
}

void espacos(int numcol){
	printf("|");
	//inicializa��o da vari�vel; condi��o de exec��o 
	for(int i=0; i<numcol ;i++){
		printf(" ");
		Sleep(tempo);
	}
		printf("|\n ");
}


void colunas(int altura, int numcol){
	for(int i=0; i<altura; i++){
	espacos(numcol);
	}
}

int main(){
	system("color 95");
	system("chcp 1252");
	
	int numlinhas, numcolunas;
	printf("\Digite o n�mero de linhas: ");
	scanf("%d", &numlinhas);
	
	printf("\Digite o n�mero de colunas: ");
	scanf("%d", &numcolunas);
	
	linha('=', numcolunas);
	colunas(numlinhas, numcolunas);
	linha('=', numcolunas);
	
	 
     
	return 0;
	
}
