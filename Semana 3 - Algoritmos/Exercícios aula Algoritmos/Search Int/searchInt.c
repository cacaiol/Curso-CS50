#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0; //return 0 dentro da func main para indicar que ela acaba aqui / indica que deu certo também
        }
    }
    printf("Not found\n");
    return 1; // Return 1 indica o que aconteceu na falha ou nesse caso que não encontrou o valor. Torna o código mais legível.
}	
