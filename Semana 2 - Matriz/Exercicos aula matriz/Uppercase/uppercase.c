#include <cs50.h>
#include <stdio.h>
#include <string.h>

//Este exercicio apresenta uma maneira de transformar uma palavra minuscula em maiscula
//Metodo sem utilizar de bibliotecas

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
