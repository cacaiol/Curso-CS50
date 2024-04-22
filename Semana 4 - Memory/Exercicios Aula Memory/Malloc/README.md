**Alocação de Memória**

**Malloc** -> Aloca um espaço de memória onde o argumento passado é a quantidade que vc deseja e devolve o endereço desse espaço.

Exemplo em C: 

```
 char *p;
 p = malloc (1);
 scanf ("%c", p); 
```
Ao alocarmos um espaço de memória, precisamos saber de quanto nós precisamos e a hora que vamos liberar esssa memória de volta,
para não ocorrer vazamento de memória. Vazemento de memória é quando perdemos aquela memoria que foi alocada, ela não foi liberada
e assim não pode ser usada novamente. 

Exemplo em c:

```
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 int *x = malloc(3* sizeof(int)); -> sizeof é um metódo que aloca a quantidade de memoria que preciso automaticamente de acordo com o tipo da variavel, no caso int.
 x[0] = 72;
 x[1] = 73;
 x[2] = 33;
 free(x); -> free é um metódo que libera a memoria que foi alocada no inicio do código para x, assim não ocorre o vazamento de memória. 
}
```
