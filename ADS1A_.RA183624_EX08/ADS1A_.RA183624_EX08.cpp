/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....02/03/2024
   OBJETIVO:.Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. 
             Assuma, neste programa, que um ano tem 365 dias e que um mês tem 30 dias. 

*/

#include <stdio.h>

int main() {
    
    int anos;

    int meses;

    int dias;

    int idade_em_dias;

    
    // Solicita a entrada do usuário
    printf("Digite a idade em anos: ");
    scanf("%d", &anos);

    printf("Digite a idade em meses: ");
    scanf("%d", &meses);

    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    
    
    // Calcula a idade em dias
    idade_em_dias = (anos * 365) + (meses * 30) + dias;


    // Exibe o resultado
    printf("A idade expressa em dias e: %d dias\n", idade_em_dias);


}
