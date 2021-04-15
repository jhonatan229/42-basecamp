
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main()
{
	int n[5] = {34, 5, 66, 76, 454};
	printf("Before: %i    %i   %i   %i    %i\n", n[0], n[1], n[2], n[3], n[4]);
	ft_rev_int_tab(n, 5);
	printf("After: %i    %i   %i   %i    %i\n\n", n[0], n[1], n[2], n[3], n[4]);

	int b[4] = {34, 5, 76, 454};
	printf("Before: %i    %i   %i   %i\n", b[0], b[1], b[2], b[3]);
	ft_rev_int_tab(b, 4);
	printf("After: %i    %i   %i   %i\n\n", b[0], b[1], b[2], b[3]);

	int c[2] = {66, 77};
	printf("Before: n%i    %i\n", c[0], c[1]);
	ft_rev_int_tab(c, 2);
	printf("After: %i    %i\n", c[0], c[1]);
	
}