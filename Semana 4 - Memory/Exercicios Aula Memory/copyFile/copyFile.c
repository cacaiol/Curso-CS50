#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE; //(uint8_t) é uma tipagem de dados de 8 bits que não trazem valores negativos / BYTE é o nome que demos para o dado

int main(int argc, char *argv[])
{
	FILE *src = fopen(argv[1], "rb");  // Arquivo que copiaremos
	FILE *dst = fopen(argv[2], "wb");  // Arquivo que será a copia

	BYTE b;

	// fread é um método que lê um ou mais bytes.
	// Passa como argumento o endereço onde é para armazenar e seu tamanho.
	// A quantidade de bytes a serem lido por vez e da onde vai ser lido esses bytes, neste caso no arquivo (src)

	while (fread(&b, sizeof(b), 1, src) != 0)
	{
		fwrite(&b, sizeof(b), 1, dst);
	}
		// fwrite escreve os bytes no local passado, neste caso no arquivo (dst)

	    // Métodos para fechar os arquivos.

	fclose(dst);
	fclose(src);
}
