#include <stdio.h>
#include <conio.h>
//ALUNO: NATHAN DONIZETI DOS REIS FERNANDES
/*Fazer um programa que pe�a 3 n�meros inteiros e mostre o maior n�mero na tela.*/

main()
{
	int n1, n2, n3;
	printf ("\n\n Exercicio numero 4 do dia 16 de marco"); // titulo do projeto
	
	printf ("\n Informe o primeiro valor: ");  // Digite um valor
	scanf ("%d", &n1); // Armazena o primeiro valor
	
	printf ("\n Informe o segundo valor: "); // Digite um valor
	scanf ("%d", &n2); // Armazena o segundo valor
	
	printf ("\n Informe o terceiro valor: "); // Digite um valor
	scanf ("%d",&n3); // Armazena o terceiro valor
	
	if (n1>n2 && n1>n3) // Se o n1 for maior que n2, e maior que n3
		printf ("\nO primeiro valor e o maior: %d",n1); // Se o IF de cima for verdadeiro, ele será printado na tela
		
	if (n2>n1 && n2>n3) // Se o n2 for maior que n1, e maior que n3
		printf ("\nO segundo valor e o maior: %d",n2); // Se o IF de cima for verdadeiro, ele será printado na tela
		
	if (n3>n1 && n3>n2) // Se o n3 for maior que n1, e maior que n2
		printf ("\nO terceiro valor e o maior: %d",n3); // Se o IF de cima for verdadeiro, ele será printado na tela
		
	getch();
}
