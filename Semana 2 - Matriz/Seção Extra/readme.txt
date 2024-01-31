**FUNCTIONS**

*Practice Problem*

Declarar uma função chamada valid_triangle que usa três números reais representando os comprimentos dos três lados de um triângulo como seus argumentos e produz verdadeiro ou falso, dependendo se esses três comprimentos são capazes de formar um triângulo.

*NOTES* 
 - Um triângulo só pode ter lados com comprimento positivo
 - a soma dos comprimentos de quaisquer dois lados do triângulo deve ser maior que o comprimento do terceiro lado.


``
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
``
