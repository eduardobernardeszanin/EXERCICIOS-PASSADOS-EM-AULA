/*


   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....31/03/2024
   OBJETIVO:. Dado o preço de um produto em reais, converter este valor para o equivalente em dólares. 
              O programa deverá ler o preço e a taxa de conversão para o dólar e deverá calcular
    
*/

#include <stdio.h> 

int main() {

    
    
    float preco_em_reais;
    
    float taxa_de_conversao;
    
    float preco_em_dolares;


    
    // Solicita ao usuário para inserir o preço em reais e a taxa de conversão
    
    printf("Digite o preco do produto em reais: ");
    scanf("%f", &preco_em_reais);


    printf("Digite a taxa de conversao em dolares: ");
    scanf("%f", &taxa_de_conversao);

    
    // Calcula o preço em dólares
    
    preco_em_dolares = preco_em_reais / taxa_de_conversao;
    
    // Exibe o resultado
    
    printf("O valor em dolar e: %.2f", preco_em_dolares);

}




























