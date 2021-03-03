#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0; 
	int j=0;
	printf("Digite o valor inicial da tela:\n");
	scanf("%d",&i);
	printf("Digite o segundo valor da tela:\n");
	scanf("%d",&j);
	printf("Result: %d \n",i+j);
	
	system ("pause");
}
