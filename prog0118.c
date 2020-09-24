#include <stdio.h>

int main()
{
    puts("Hello World");
    printf("Hello World");
}

/* A grande diferença entre puts(str) e printf(str) 
/* é que a função print vai interpetar o conteudo lá dentro como uma string
/* e caso estejamos a imprimir uma variavel com caracteres especias, pode gerar erros 
/* nesse sentimos devemos usar apenas print quando temos uma string e puts para variaveis
/* quando desconheçemos o output
/* para além que puts incorpora um new line */
