#include "ft_printf.h"

int	ft_size_hexa(unsigned int n)
{
	int	size;

	size = (n == 0);
	while (n)
	{
		n /= 16;
		size++;
	}
	return (size);
}