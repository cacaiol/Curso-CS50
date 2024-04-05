
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
