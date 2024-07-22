/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....02/03/2024
   OBJETIVO:. Escreva um programa que dado os litros de combustível gasto e os quilômetros percorridos por um automóvel, calcule os gastos de combustível em Reais, calcule também qual a média de consumo que o carro teve durante a viagem.
              (Considerar que um litro custa R$ 5,24) 

              Calcular e Escrever.:

            ·       Litros de Combustível Gasto.

            ·       Total de Quilômetros Percorridos.

            ·       Total gasto de combustível em Real.

            ·       Consumo Médio de Combustível.

*/


#include <stdio.h>

int main() {
    
    
    float litros_combustivel; 
    
    float km_percorridos; 
    
    float total_gasto_combustivel; 
    
    float consumo_medio;
    
   
    // preço do litro de combustível em Reais
    
    float preco_litro = 5.24; 

   
   
    // Solicita entrada do usuário
    printf("Informe os litros de combustivel gasto: ");
    scanf("%f", &litros_combustivel);
    
    
    printf("Informe os quilometros percorridos: ");
    scanf("%f", &km_percorridos);

   
   
    // Calcula o total gasto de combustível em Reais
    
    total_gasto_combustivel = litros_combustivel * preco_litro;

     // Calcula o consumo médio de combustível
   
    consumo_medio = km_percorridos / litros_combustivel;
     
     
     // Exibe os resultados
    
    printf("Litros de combustivel gasto: %.2f \n", litros_combustivel);

    printf("Total de Quilometros Percorridos: %.2f km \n", km_percorridos);

    printf("Total gasto de combustível em Real: R$ %.2f \n", total_gasto_combustivel);

    printf("Consumo Medio de Combustivel: %.2f \n", consumo_medio);

    
}