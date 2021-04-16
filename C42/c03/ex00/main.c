#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int main()
{
	char c1[] = "abc";
	char c2[] = "abc";
	char c3[] = "ab";
	char c4[] = "abcfe";
	printf("c1=  %s, c2 =  %s, c3 =  %s, c4 = %s\n", c1, c2, c3, c4);

	printf("\n------c1 - c2-------\nMy strcmp: %i,  original strcmp: %i \n", ft_strcmp(c1, c2), strcmp(c1, c2));
	printf("\n------c1 - c3-------\nMy strcmp: %i,  original strcmp: %i \n", ft_strcmp(c1, c3), strcmp(c1, c3));
	printf("\n------c1 - c4-------\nMy strcmp: %i,  original strcmp: %i \n", ft_strcmp(c1, c4), strcmp(c1, c4));
}