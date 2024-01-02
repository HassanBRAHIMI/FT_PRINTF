#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int c = ft_printf(" NULL %s NULL", NULL);
	printf("\n%d", c);
	printf("\n");
	int j = printf("NULL %s NULL", NULL);
	printf("\n%d", j);
}
