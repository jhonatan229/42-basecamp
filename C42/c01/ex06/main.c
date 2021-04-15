
#include <stdio.h>

int	ft_strlen(char *str);

int main()
{
	char c[] = "quantity";
	int count = ft_strlen(c);
	printf("\nnumero de caracteres: %i\n", count);
}