#include <cs50.h>
#include <stdio.h>

const int N = 3; //Variable Global

float average(int length, int array[]); //Prototype function

int main (void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(N, scores));
}

    float average(int length, int array[]) //Average function
    {
        int sum = 0;
        for(int i = 0; i < length; i++)
        {
            sum += array[i];
        }
        return sum / (float) length;
    }
