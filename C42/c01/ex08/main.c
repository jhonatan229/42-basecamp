#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main()
{
	int n[5] = {34, 5, 66, 10, 55};
	printf("Before: %i    %i   %i   %i    %i\n", n[0], n[1], n[2], n[3], n[4]);
	ft_sort_int_tab(n, 5);
	printf("After: %i    %i   %i   %i    %i\n\n", n[0], n[1], n[2], n[3], n[4]);

	int c[2] = {13, 9};
	printf("Before: %i    %i\n", c[0], c[1]);
	ft_sort_int_tab(c, 2);
	printf("After: %i    %i\n", c[0], c[1]);
}
