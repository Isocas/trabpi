#include<stdio.h> 
#include<math.h> 
/*
%-------------------------------------------------------------------------------------------
%                                    Função de dobro
%-------------------------------------------------------------------------------------------
%     Esta função, recebe um número como parametro de entrada e devolve o dobro desse 
% número.
%-------------------------------------------------------------------------------------------
*/
int dobro(int x)
{
 int res;
 
 res=x*2;
 return(res);
}
/*
%-------------------------------------------------------------------------------------------
%				Função de soma
%-------------------------------------------------------------------------------------------
%	Esta função, recebe dois números como parametro de entrada e devolve como parametro
%de saída, a soma dos dois números que recebeu.
%	Esta função também poderia ser escrita de forma compacta em apenas uma linha,
%retornado a soma.
%-------------------------------------------------------------------------------------------
*/
int soma(int x,int y)
{
 int res;
 
 res=x+y;
 return(res);	
}
/*
%----------------------------------------------------------------------------------------------
%				Função média 
%----------------------------------------------------------------------------------------------
% 	Esta função, recebe como parametros de entrada dois números, vamos usar a função de 
% soma, e depois temos que dividir por 2. Mas este "2" não pode ser o número inteiro, colocando 
%2, o resultado obtido é o número inteiro da divisão. Se colocarmos "2.0", o resultado vem em 
%formato flutuante.
%----------------------------------------------------------------------------------------------
*/
float media(int x, int y)
{
 float res;
 
 res=(x+y)/2.0;
 return (res);
}

int main() 
{
 int dob,sum, x;
 float med;
 
 printf("Introduza um número:\n");
 scanf("%d",&x);
 dob=dobro(x);
 sum=soma(x,dob);
 med=media(x,dob);
 printf("O dobro de %d é %d.\n",x,dob);
 printf("A soma de %d com %d é %d .\n",x,dob,sum);
 printf("A média de %d com %d é %f .\n",x,dob,med);

 return 1;
}
