
/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....02/03/2024
   OBJETIVO:. Uma loja vende bicicletas com um acréscimo de 50 % sobre o seu preço de custo. Ela paga a cada vendedor 2 salários-mínimos mensais, mais uma comissão de 15 % sobre o preço de custo de cada bicicleta vendida, dividida igualmente entre eles.
              Escreva um programa que leia o número de empregados da loja, o valor do salário mínimo, o preço de custo de cada bicicleta, o número de bicicletas vendidas, calcule e escreva: O salário final de cada empregado e o lucro (líquido) da loja. 


*/

#include <stdio.h>


int main() {


    int num_empregados;
    
    int num_bicicletas_vendidas;

   float salario_minimo;

   float preco_custo_bicicleta;

    // Pedir ao usuário para inserir os valores necessários

    printf("Digite o numero de empregados da loja: ");
    scanf("%d", &num_empregados);

    printf("Digite o numero do salario minimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite o preco de custo de cada bicicleta: ");
    scanf("%f", &preco_custo_bicicleta);

    printf("Digite o nuemero de bicicletas vendidas: ");
    scanf("%d", &num_bicicletas_vendidas);


    
    //Calcular comissão por bicicleta a ser vendida
    
    float comissao_por_bicicleta = 0.15 * preco_custo_bicicleta;

    
    //Calcular o lucro  líquido da loja

    float lucro_liquido = num_bicicletas_vendidas * (preco_custo_bicicleta * 1.5 - preco_custo_bicicleta);

    
    //Calcular o salário final de cada empregado

    float salario_final_empregado = 2 * salario_minimo + (num_bicicletas_vendidas  * comissao_por_bicicleta) / num_empregados;

   
    
    // Imprimir o salário final de cada empregado e o lucro líquido da loja

    printf("\n Salario Final de cada empregado: R$:%.2f \n", salario_final_empregado);
    printf("Lucro liquido da loja: %.2F \n", lucro_liquido);







}



    