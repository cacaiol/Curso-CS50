#include <cs50.h>
#include <stdio.h>
#include <string.h>

//Neste caso estamos imprimindo cada caracter de uma string recebida pelo usuário.
//Foi passado o metodo strlen dentro do iniciador do loop "for" ao inves de ser passado como uma verificação na expressão booleana.
//Isso fez com que o programa não rodasse o método desnecessariamente cada vez que fosse fazer a verificação no loop.

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
