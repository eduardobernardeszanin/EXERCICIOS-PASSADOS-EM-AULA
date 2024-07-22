/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....02/03/2024
   OBJETIVO:.Maria quer saber quantos litros de gasolina precisa colocar em seu carro e quanto vai gastar para fazer uma viagem até a casa de sua irmã.
             Dados extras:
             Distância da casa de Maria até sua irmã : 520 km
             Seu carro consome um litro a cada 12 Km rodado.
             Ela abastece sempre no mesmo posto, onde o preço da gasolina é R$ 7,20 o litro.

*/


#include <stdio.h>

int main() {
    
    
    // Definindo os dados extras


    // Distância em quilômetros
    int distancia = 520;
    

    // Consumo do carro em litros por quilômetro
    int consumo_por_km = 12;
    
   
    // Preço da gasolina por litro
   float preco_gasolina = 7.20;




    // Calculando a quantidade de litros necessários 
    float litros_necessarios = (float)distancia / consumo_por_km;

    
    // Calculando o custo total da viagem
    float custo_total = litros_necessarios * preco_gasolina;

       
    // Exibindo os resultados
    printf("Para fazer uma viagem de %d km ate a casa da sua irma:\n", distancia);
    
    printf("Voce precisa de %.2f litros de gasolina.\n", litros_necessarios);
    
    printf("E o custo total da viagem sera de R$ %.2f.\n", custo_total);





}
