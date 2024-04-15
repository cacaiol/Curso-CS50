**Ponteiros**

 *Ponteiro* é o endereço de uma variável na memória que você pode até armazenar em outra variável.

  Exemplos em C: 

  ```
  #include <stdio.h>

  int main(void)
  {
    // O & comercial mostra qual o endereço na memoria. 		
  	int n = 50;
  	int *p = &n;            ->  Estamos armazenando o endereço na memoria da variavel n em *p.
  	printf("%p\n", p);
  }
  ```
  ```
  #include <stdio.h>

  int main(void)
  {
    int n = 50;
    int *p = &n;            -> Estamos apontando para o endereço de n e mostrando o que tem armazenado. 
    printf("%i\n", *p);
    }
  ```

*Ponteiro* sobre **Strings**

Exemplo em C:

```
#include <cs50>
#include <stdio.h>

int main(void)
{
	string s = "HI!";
	printf("%p\n", s);
	printf("%p\n", &s[0]);
	printf("%p\n", &s[1]);
	printf("%p\n", &s[2]);
	printf("%p\n", &s[3]);
}
```
- A variável "s" por de baixo dos panos paonta para o endereço onde está armazenado o array de characteres "HI!" ou melhor dizendo,
para o inicio do array, no caso na posição [0] onde está armazenado a letra "H".

- Apontar para s quanto apontar para &s[0] é a mesma coisa, ambos apontam para o inicio do array de characteres.

- Essa string "HI!" está ocupando 4 bytes na memoria pois sempre há um caractere nulo para o armazenamento de strings. -> 

```
| H | I | ! | \0 |
  0   1   2    3
```

Agora entendemos que ``string s = "HI!"`` na verdade é um ponteiro para onde esta armazenado a palavra HI! na memoria. 

Logo podemos dizer: ``string s = "HI!";`` = ``char *s = "HI!";``

- char *s é o endereço do primeiro caractere da palavra armazenada em s

