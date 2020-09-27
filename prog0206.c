#include <stdio.h>

int main()
{
    /* Este exemplo onde recorremos a inteiros, floats e doubles e aos respetivos  */ 
    /* inteiros podem ter prefixo
    /* short(2k),long(4k) e valores positivos e negativos com o "signed" e só positivos com o "unsigned"
    */

    short idade; /* variavel idade tipo inteiro short*/
    int montante; /* variavel montante tipo interio */
    long int n_conta; /* variavel n_conta tipo inteiro long, pode se declarar long int var ou long var, tal como o short  */

    printf("Qual é a sua idade: "); /* print para ecrã onde pergunta a idade ao user sem "\n" newline, porque a seguir temos um scanf à espera de um input */
    scanf("%hd", &idade); /* input para a variavel idade onde recebe um shor "%h" inteiros "%d" */
    printf("Qual é o montante que pretende depositar: ");
    scanf("%d", &montante); 
    printf("e qual é o número da conta, onde vamos fazer o deposito: ");
    scanf("%ld", &n_conta); /* aqui o input é inteiro "%d" longn "%k" */

    printf("RESUMO:\n");
    /* no output abaixo, como vamos buscar as variaveis guardadas temos que organizar, as variaveis e os seus formatos na mesma ordem de entrada que são disponibilizadas*/
    printf("A sua idade é %hd anos, e pretende depositar %d Euros na conta: %ld\n", idade, montante, n_conta); 
}
