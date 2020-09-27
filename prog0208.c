#include <stdio.h>

int main()
{
    
    float quilos = 1.0E3; /* uma tonelada são 1000 quilos, que é o que temos aqui representao na varivel */
    double gramas = 1.0e6; /* uma tonealada são 1,000.000 gramas, usar o formato E ou e para um valor exponencial é igual  */
    float toneladas;

    printf("Quantas toneladas temos que converter \? ");
    scanf("%f", &toneladas); 

    /* secção de conversão*/

    /* estes output para além de apresentar as variveis faz a conversão de toneladas em quilos e gramas */
    /* Exemplo onde vemos que podemos usar operações nas funções de output com as variaveis */
    printf("Resumo:\n");
    printf("%f Toneladas são %f Quilos ou %e Quilos (exponencial)\n", toneladas, (toneladas * quilos), (toneladas * quilos) ); 
    printf("%f Toneladas são %f Gramas ou %e Gramas (exponencial)\n", toneladas, (toneladas * gramas), (toneladas * gramas) ); 

}
