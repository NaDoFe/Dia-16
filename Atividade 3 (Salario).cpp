#include <stdio.h>
#include <conio.h>
//ALUNO: NATHAN DONIZETI DOS REIS FERNANDES
/*FAÇA UM PROGRAMA PARA CALCULAR E MOSTRAR O SALARIO REAJUSTADO DE UM FUNCIONARIO.
O PERCENTUAL DE AUMENTO ENCONTRA-SE NA TABELA A SEGUIR:
SALARIO             PERCENTUAL DE AUMENTO
ATE R$ 800,00                   20%
ACIMA DE R$ 800,00              10%
MOSTRAR NOVO SALARIO NA TELA.*/

main ()
{
	float n1, n2, n3;
	
	printf ("\n\n Exercicio numero 3 do dia 16 de marco"); // titulo do projeto
	
	printf ("\nInforme o salario do funcionario: "); // Digite um numero, referente ao salario do funcionario
	scanf ("%f", &n1); // Armazena o numero informado acima
	
	n2 = (n1*0.2)+n1; // Operacao que multiplica o percentual de aumento, nesse caso de 20%
	n3 = (n1*0.1)+n1; // Operacao que multiplica o percentual de aumento, nesse caso de 10%
	
	
	if (n1>800) // Aqui, se o salario base dele for maior que 800, faz o calculo apenas para o aumento de 10%
		printf ("\nO Salario Inicial era de %.2f, com o aumento passa a tornar: %.2f ",n1, n3); /* Se no caso for o aumento de 10%, irá printar na tela o salario
		 mais o aumento de 10%*/
	
	if (n1<=800) // Aqui, se o salario base dele for menor que 800, faz o calculo apenas para o aumento de 20%
		printf ("\nO Salario Inicial era de %.2f, com o aumento passa a tornar: %.2f",n1, n2); /* Se no caso for o aumento de 20%, irá printar na tela o salario 
		mais o aumento de 20%*/
	
	getch();	
}

