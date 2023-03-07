#include "ft_printf.h"

unsigned int	ft_nbrlen_unsigned(unsigned int n)
{
	unsigned long	nb;
	unsigned int	i;

	nb = n;
	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}