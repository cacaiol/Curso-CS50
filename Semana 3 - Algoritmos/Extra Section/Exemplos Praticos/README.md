
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
