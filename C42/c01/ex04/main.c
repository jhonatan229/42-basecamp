
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a = 10;
	int b = 3;
	int *pa = &a;
	int *pb = &b;

	printf("a = %i    b = %i\n", *pa, *pb);

	ft_ultimate_div_mod(pa, pb);

	printf("div = %i    mod = %i\n", *pa, *pb);
}