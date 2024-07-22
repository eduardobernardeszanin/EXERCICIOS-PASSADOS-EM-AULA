/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....31/03/2024
   OBJETIVO:.Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente. 
             MEDIA = ((NOTA1 * 2) + (NOTA2 * 3) + (NOTA3 * 5)) / 10;
    
*/

#include <stdio.h>


int main() {


    float note1;

    float note2;

    float note3;

    float media;



    
    //Usuário digita suas notas
    printf("Digite a primeira nota: ");
    scanf("%f", &note1);

    printf("Digite a segunda nota: ");
    scanf("%f", &note2);

    printf("Digite a terceira nota: ");
    scanf("%f", &note3);

    
    
    //Valor da média

    media = ((note1 *  2) + (note2 * 3) + (note3 * 5) / 10);

    //Resultado
    printf("Sua media e: %.2f \n", media);

}



    
    
    
   

    



    

































