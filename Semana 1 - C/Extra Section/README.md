
**Data Types and Variables**

`INT` para dados com valores inteiros. 4 *bytes* de memoria (32 bits). Limitado a 32 bits. `UNSIGNED` dobra o alcance para valores inteiros ao custo de não usar os valores negativos. 

`FLOAT` para numeros reais, com valores após a virgula: 8,9576. 4 *bytes* de memoria (32 bits). Limitado à uma certa quantidade de valores após a virgula. O tipo `DOUBLE` é uma solução que
aumenta o alcance após a virgula.

`VOID` Funções que não há retorno. 

`BOOL` para variaveis do tipo booleano, salvam valores do tipo verdadeiro ou falso. 

`STRING` para conjunto de caracteres.

**Operadores Lógicos**

*Boolean Expressions*

`&&`  AND só sera verdadeiro se todos os lados forem verdadeiros. *true* && *true* = *true*. Caso não atenda a essa condição será *false*

`||`  OR será verdadeiro se pelo menos uma condição for verdadeira. False apenas com *false* + *false* = *false*

`NOT` (!) Inverte o valor da operação: Se X é *true*, então !X é *false*

*Operador Ternário*  Apenas para substituir um if-else simples se quiser.

`int x = (expr) ? 5 : 6;` 

``int x;
   if (expr)
   {
      x = 5;
   } 
   else
   {
      x = 6;
   }``   

  **LOOPS** 
  
(WHILE LOOPS é ideal quando não se sabe quantas vezes quer iterar algo)
(FOOR LOOPS já é ideal quando se sabe o numero exato de vezes que quer iterar algo)

Reforçando ideias sobre escrever seu código de uma maneira mais simples e legivel.
Exemplos escritos em `C`
```
int i = 0;                                    for (int i = 0; i < 3; i++)
while (i < 3)                                {
{                       same thing as ->         printf("hi\n");
   printf("hi\n");                            }
   i++;
}
```

```
  int calls = 4;                                int calls = 4;
  calls = calls + 1;                            calls += 1;     
  calls = calls - 2;       simplifying ->       calls -= 2;
  calls = calls * 3;                            calls *= 3;
  calls = calls / 2;                            calls /= 2;
```
