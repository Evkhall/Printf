#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n)
{
	unsigned long	nb;

	nb = n;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}