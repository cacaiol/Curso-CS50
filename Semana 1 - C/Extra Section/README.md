
Reforçando ideias sobre escrever seu código de uma maneira mais simples e legivel.
Exemplos escritos em `C`

(WHILE LOOPS é ideal quando não se sabe quantas vezes quer iterar algo)
(FOOR LOOPS já é ideal quando se sabe o numero exato de vezes que quer iterar algo)
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
