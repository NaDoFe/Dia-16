#include <stdio.h>
#include <conio.h>
//ALUNO: NATHAN DONIZETI DOS REIS FERNANDES
/*FAÇA UM PROGRAMA QUE RECEBA 2 NÚMEROS INTEIROS E VERIFIQUE O MAIOR NUMERO.
DA UMA MENSAGEM DO NUMERO MAIOR.
ENTRE COM NUMERO 1:  20
ENTRE COM NUMERO 2: 10
MAIOR NUMERO = 20*/


main()
{
	int n1, n2;
	
	printf ("\n\n Exercicio numero 2 do dia 16 de marco"); // Titulo do projeto
	
	printf ("\nEntre com um numero: "); // Digite um numero
	scanf ("%d", &n1); // Armazena o numero acima
	
	printf ("\nEntre com outro numero: "); // Digite outro numero
	scanf ("%d", &n2); // Armazena o numero acima
	
	if (n1>n2) // Comando para ver se qual variavel que é maior
		printf ("\n%d e maior numero", n1); // Nesse caso, se a variavel n1 for maior que n2, ele ira aparecer na tela
	if (n1<n2) // Comando para ver se qual variavel que é maior
		printf ("\n%d e o maior numero",n2); // Nesse caso, se a variavel n2 for maior que n1, ele ira aparecer na tela
	getch ();
	
}

