**FUNCTIONS**

*Practice Problem*

Declarar uma função chamada valid_triangle que usa três números reais representando os comprimentos dos três lados de um triângulo como seus argumentos e produz verdadeiro ou falso, dependendo se esses três comprimentos são capazes de formar um triângulo.

*NOTES* 
 - Um triângulo só pode ter lados com comprimento positivo
 - a soma dos comprimentos de quaisquer dois lados do triângulo deve ser maior que o comprimento do terceiro lado.


```
  bool valid_triangle(float x, float y, float z);
  bool valid_triangle(float x, float y, float z)
  {
    if (x <= 0 || y <= 0 || z <= 0)
      {
          return false;
      }
    if ((x + y <= z) || (x + z <= y) || (y + z <= x))
      {
          return false;
      }
      return true;
    }
 ```

**VARIABLE ESCOPO**

Este trecho apresenta a ideia de variaveis e escopo, duas variaveis (X) com o mesmo nome.

```
int increment(int x);

int main(void)
{40
  int x = 1;
  int y;
  y = increment(x);
  printf("x is %i, y is %i\n", x, y);
}

int increment(int x)
{
  x++;
  return x;
}
 ```
O resultado desse trecho é: `x = 1`  e  `y = 2`


**ARRAYS**

*NOTES*
- Em c, os elementos de um array são indexados a partir de 0. Esta é uma das principais razões pelas quais contamos a partir de zero.
- Se uma matriz consiste em n elementos, o primeiro elemento está localizado no índice 0. O último elemento está localizado no índice *(n-1)* onde *n* é o numero de elementos. 
  
*DECLARATIONS*

**Exemplo**

type name[size] -> int nota_aluno[40]











