
**Big O Notation**

*Definições*	
  - Qual é o maior numero de etapas que um algoritmo realizará?
  - No pior dos casos quantas etapas o algoritmo realizará?
  - Tecnicamente o algoritmo nunca será executado mais devagar do que isso.

  ```
    O(n) -> No pior dos casos teremos que percorrer N passos para algo.
    O(n^2) -> No pior dos casos teremos n passos ao quadrado.
    O(1) -> Algoritmo de tempo constante, N passos constante.
    O(log n) -> No pior dos casos teremos que percorrer Log N de passos. 
  ```
  
**Exemplo usando algoritmos de pesquisa:**

```
 Linear Search               Binary Search
     O(N)                      O(Log(N))
```
**Exemplo usando uma lista com 7 elementos:**

```
Linear Search               Binary Search
     O(7)                      Log2(7)
```

*Linear Search* -> No pior dos casos será preciso N etapas.

*Binary Search* -> Log2(7) no pior dos casos. 

**Definições para Binary Search**

- A lista precisa estar ordenada.
- No pior dos casos será O(log n)
- No melhor dos casos será Ω(1)


**Omega Ω Notation**

Diz que dado qualquer tipo de entrada, qual seria o menor numero de passos que daríamos?

Exemplo:

```
Linear Search               Binary Search
     Ω(1)                     Ω(1)
```

**Notações Comuns:**

```
O(1)               Ω(1)

O(log(N))	   Ω(log(N))					

O(N)               Ω(N)

O(N^2)             Ω(N^2)
```

**Struct:**

**Encapsular** informações (dados) para que possamos no referir a eles com apenas um nome.

Definição em C com um exemplo de uma struct de candidatos. 

```
typedef struct -> Criar um novo tipo que contenha uma coleção de outros tipos basicos. 
	{
		string name;  -> Basic Types
		int votes:    -> Basic Types
	}
	candidate;

	candidate president; -> Instanciando a struct acima
	president.name = "Samia"; -> Adicionando valores as propriedades
	president.votes = 10; -> Adicionando valores as propriedades
```

**Recursion**

A definição de uma função recursiva é aquela que, como parte de sua execução, invoca a si mesma.

Demonstrando com fatoração matemática. 

```
        fact(1) = 1					        fact(1) = 1					
	fact(2) = 2 * 1 					fact(2) = 2 * fact(1)
	fact(3) = 3 * 2 * 1                recursion ->		fact(3) = 3 * fact(2)      
	fact(4) = 4 * 3 * 2 * 1 				fact(4) = 4 * fact(3)
	fact(5) = 5 * 4 * 3 * 2 * 1				fact(5) = 5 * fact(4)

``` 
Logo temos -> fact(n) = n * fact(n-1)

*Toda* função recursiva tem dois casos que podem ser aplicados, dada qualquer entrada. 

- O caso base, que quando acionado encerrará o processo recursivo.
- O caso recursivo, que é onde a recursão realmente ocorrerá.

**Base case** -> fact(1) = 1

**Recursive case** -> n * fact(n-1)

*Demonstração em C*

```
int fact(int n)
{
	// base case
	if (n == 1)
		return1;

	// recursive case
	else
		return n* fact(n-1);
}
```
Uma função recursiva pode ter mais de um caso recursivo. 

Exemplo com a conjectura de *Collatz*:

A conjectura de *Collatz* especula que é sempre possível "voltar a 1" numeros inteiros positivos. 

Demonstração em C 

```
int collatz(int n)
{
	// base case
	if (n == 1)
		return 0;

	// recursive case 1
	else if ((n % 2) == 0)
		return 1 + collatz(n/2);

	// recursive case 2
	else 
		return 1 + collatz(3*n +1);
}	
```
