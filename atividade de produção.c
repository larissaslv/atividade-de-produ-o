//usuário github:larissaslv
//calculadora que realiza operações matemáticas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) 
{
	//soma de dois números
	
	int op;
	float raiz,nmr,nmr1,nmr2,soma,multiplicacao,divisao,potencia;
	//Scanf pega o valor de puts;
	puts("Nome: Larissa Silva Santos");
	puts("Curso: Análise e desenvolvimento de sistemas");
	puts("Universidade: La Salle");
	puts("Matrícula:202214126");
	//realizar as operações matemáticas
	puts("Digite qual operaçao deseja realizar");
	puts("Digite 1 para raiz quadrada e potencia ou Digite 2 Para Soma, Divisao e Multiplicaçao\n");
	printf(" Digite 1 ou 2:\n "); 
	scanf("%d",&op);
	
	if (op==1) 
	 {printf(" Digite o número\n ");
	 scanf("%f",&nmr);
	 raiz= sqrt(nmr);
	 printf(" Raiz: %f \n ", raiz);
	 
	 potencia= pow(nmr,2); //nmr é a base e 2 o expoente.
	 printf ("Potencia:%f\n ", potencia);
	 
	}
	else 
	 {printf(" Digite o primeiro número:\n ");
	 scanf("%f",&nmr1);
	 printf(" Digite o segundo número: \n ");
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

