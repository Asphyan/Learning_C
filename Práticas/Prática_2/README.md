#QUESTÕES

1 - PROGRAMA PARA DECIDIR SE ALGUÉM É MAIOR DE IDADE.

I. O usuário executa o programa.
II. O programa fica esperando que o usuário digite um número correspondendo a idade da pessoa.
III. Caso o número que o usuário digitou, correspondendo a idade da pessoa, seja maior ou igual a 18, o programa mostrará a mensagem “maior de idade” na tela.

2 - Modifique o seu programa para imprimir “menor de idade” somente quando a pessoa for menor de idade, ou seja, menor que 18 anos.

3 - Um número é considerado par quando é divisível por 2, ou seja, dado qualquer número, se você conseguir dividir por 2 de tal forma que o resto seja igual a zero, esse número é par. A linguagem C possui o operador % que retorna o resto da divisão entre dois números inteiros.

4 - Modifique o programa que diz se a idade é par para fazer imprimir, caso a idade seja par, o dobro e a metade da idade digitada.

5 - Liste 2 outros cenários onde o uso do comando if seria aplicável. Escreve um programa para cada um desses cenários que você pensou.

6 -

#include<stdio.h>
   int main()
   {
   		int a,b;
   		scanf("%d%d",&a,&b);
   		if (a%2==0 && b%2==0)
   		{
         	printf("desconto\n");
   		}  
      return 0;
   }

 Modifique o código anterior para dar descontos somente se a “pessoa a” tiver idade par, não interessando a idade da “pessoa b”. Teste o seu programa 4 vezes. Cada uma das vezes use uma das linhas da tabela a seguir como entradas e verifique se o seu programa está imprimindo a resposta esperada.

7 - Modifique o código para dar descontos quando uma das duas tiver idade ímpar.

8 - Faça um programa que receba as horas de um dia no formato 24 horas e imprima “escuro”, caso a hora esteja entre 18 e 5. Os valores válidos para hora consistem do intervalo: [0,23]

9 - Ao viajar para o exterior, uma pessoa pode trazer no máximo 500 dólares em compras. Se o valor ultrapassar 500, ela deve pagar um imposto de 50% do valor que exceder os 500 dólares. Por exemplo, se um passageiro gastou 820 dólares, ele ultrapassou o limite em 320 dólares, logo o imposto será de 50% em cima dos 320, ou seja, 160 dólares. Faça um programa que recebe o total gasto por um viajante e imprime o valor total a ser pago de imposto. Perceba que se o valor da compra for igual ou menor que 500, o valor de imposto será 0.Ao viajar para o exterior, uma pessoa pode trazer no máximo 500 dólares em compras. Se o valor ultrapassar 500, ela deve pagar um imposto de 50% do valor que exceder os 500 dólares. Por exemplo, se um passageiro gastou 820 dólares, ele ultrapassou o limite em 320 dólares, logo o imposto será de 50% em cima dos 320, ou seja, 160 dólares. Faça um programa que recebe o total gasto por um viajante e imprime o valor total a ser pago de imposto. Perceba que se o valor da compra for igual ou menor que 500, o valor de imposto será 0.

