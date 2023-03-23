#include <stdio.h>
#include <conio.h>
//ALUNO: NATHAN DONIZETI DOS REIS FERNANDES
//FAÇA UM PROGRAMA QUE RECEBA UM NUMERO INTEIRO E VERIFIQUE SE ESSE NÚMERO É POSITIVO OU NEGATIVO.

main()
{
	int n1;
	
	printf ("\n\n Exercicio numero 1 do dia 16 de marco"); // Titulo do projeto
	
	printf ("\n Entre com um valor: "); // Digite um numero
	scanf ("%d",&n1); // Armazena o numero acima
	
	if (n1>=0)  // Comando para ver se qual variavel é maior
		printf ("\nValor Positivo"); // Nesse caso, se o numero for positivo, ele ira aparecer na tela
	else  // Se usa else para que se caso o if na linha de cima não for maior, ele repita aqui em baixo
		printf ("\nValor Negativo"); // Nesse caso, se o numero for negativo, ele ira aparecer na tela
	getch();
}
