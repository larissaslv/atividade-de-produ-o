//calculadora que realiza opera��es matem�ticas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) 
{
	//soma de dois n�meros
	
	int op;
	float raiz,nmr,nmr1,nmr2,soma,multiplicacao,divisao,potencia;
	//Scanf pega o valor de puts;
	puts("Nome: Larissa Silva Santos");
	puts("Curso: An�lise e desenvolvimento de sistemas");
	puts("Universidade: La Salle");
	puts("Matr�cula:202214126");
	//realizar as opera��es matem�ticas
	puts("Digite qual opera�ao deseja realizar");
	puts("Digite 1 para raiz quadrada e potencia ou Digite 2 Para Soma, Divisao e Multiplica�ao\n");
	printf(" Digite 1 ou 2:\n "); 
	scanf("%d",&op);
	
	if (op==1) 
	 {printf(" Digite o n�mero\n ");
	 scanf("%f",&nmr);
	 raiz= sqrt(nmr);
	 printf(" Raiz: %f \n ", raiz);
	 
	 potencia= pow(nmr,2); //nmr � a base e 2 o expoente.
	 printf ("Potencia:%f\n ", potencia);
	 
	}
	else 
	 {printf(" Digite o primeiro n�mero:\n ");
	 scanf("%f",&nmr1);
	 printf(" Digite o segundo n�mero: \n ");
	 scanf("%f",&nmr2); 
	 
     
	 soma= nmr1 + nmr2;
	 printf(" Soma:%f\n ",soma);
	
	 multiplicacao= nmr1 * nmr2;
	 printf("Multiplicacao:%f\n ",multiplicacao);
	
	 divisao=nmr1/nmr2;
	 printf("Divisaoo:%f\n ",divisao);
	}
	
	return 0;
}

