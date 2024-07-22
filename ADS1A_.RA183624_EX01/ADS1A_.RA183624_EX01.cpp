/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....31/03/2024
   OBJETIVO:.Fazer um programa para ler a base e a altura de um triângulo. Em seguida, escreva a área do mesmo.

*/


#include <stdio.h>
#include <string.h>

int main() {

    float base;

    float altura;

    float area;



    //Valor da base
    
    printf("Digite o valor da base:  ");
    scanf("%f", &base);

    
    //Valor da altura
    
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    area = base * altura / 2;
    
     //Resultado
    
    printf("\n\n");
    printf("O valor da area e:  %.2f \n", area);







}