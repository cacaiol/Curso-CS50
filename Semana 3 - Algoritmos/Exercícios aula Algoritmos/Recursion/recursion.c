#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    // Condição para validar que não haverá linhas menores que zero
    if (n <= 0)
    {
        return;
    }
    // Imprimindo uma piramide de altura n - 1
    draw(n - 1);

    // Imprimindo uma linha
    for (int i = 0; i <n; i++)
    {
        printf("#");
    }
    printf("\n");
}

