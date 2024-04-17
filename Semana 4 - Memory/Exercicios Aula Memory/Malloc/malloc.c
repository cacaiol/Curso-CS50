    #include <cs50.h>
	#include <ctype.h>
	#include <stdio.h>
	#include <string.h>
    #include <stdlib.h>


	int main(void)
	{
		char *s = get_string("s: ");
		if (s == NULL)
		{
			return 1;
		}

		char *t = malloc(strlen(s) + 1);
		if (t == NULL)
		{
			return 1;
		}


		for (int i = 0, n = strlen(s); i <= n; i++)   // Essa logica poderia ser substituido pelo método "strcpy"
		{
			t[i] = s[i];
		}

		if (strlen(t) > 0)
		{
			t[0] = toupper(t[0]);
		}
		printf("%s\n", s);
		printf("%s\n", t);

        free(t); // Esse método libera a memoria que foi alocada para t
        return 0;
	}
