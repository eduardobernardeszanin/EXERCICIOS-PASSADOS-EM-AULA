/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....02/03/2024
   OBJETIVO:. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). 
              Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor. 

*/

#include <stdio.h>

int main() {
    
    
    float custoFabrica; 
    
    
    float custoConsumidor;
    
    
    float percentagem_Distribuidor = 0.28;
    
    
    float impostos = 0.45;

   
    // Solicita o custo de fábrica do carro
    printf("Digite o custo de fabrica do carro:  ");
    scanf("%f", &custoFabrica);

    
    // Calcula o custo ao consumidor
    
    custoConsumidor = custoFabrica + (custoFabrica * percentagem_Distribuidor) + (custoFabrica * impostos);

    
    // Exibe o custo ao consumidor
    printf("O custo ao consumidor do carro eh: %.2f\n", custoConsumidor);

    
}



