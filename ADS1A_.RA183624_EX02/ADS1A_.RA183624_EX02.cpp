/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....31/03/2024
   OBJETIVO:.Efetuar o cálculo e a apresentação do valor de uma prestação em atraso, utilizando a fórmula: 
   PRESTAÇÃO = VALOR + (VALOR * ( TAXA/100) * TEMPO)
    
*/


#include <stdio.h>

int main() {

    float prestacao;

    float taxa;

    float tempo;

     
    //Valor
    printf("Digite o valor da prestacao: ");
    scanf("%f", &prestacao);

    //Taxa
    printf("Digite o valor da taxa: ");
    scanf("%f", &taxa);

   
    //Tempo
    printf("Cite o tempo: ");
    scanf("%f", &tempo);

    
    //Resultado
    printf("Resultado final e: %.2f \n", prestacao + (taxa/100)+ tempo);

}
