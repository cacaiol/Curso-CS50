#include <cs50.h>
#include <stdio.h>

//#include <string.h> essa biblioteca me da acesso ao método "strlen" que calcula automaticamente o comprimento de uma string.
//Por de baixo dos panos desse método deve haver uma função parecida com essa abaixo calculando o comprimento da string passada.

int string_length(string s);

int main (void)
{
    string name = get_string("Name: ");
    int length = string_length(name);
    printf("%i\n", length);

}

int string_length(string s)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}
