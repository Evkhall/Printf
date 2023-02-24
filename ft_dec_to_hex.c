#include "ft_printf.h"

void	ft_dec_to_hex(unsigned int n, int base)
{
	long	nb;
	char	*lower_base;
	char	*upper_base;

	lower_base = "0123456789abcdef";
	upper_base = "0123456789ABCDEF";
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= 16)
		ft_dec_to_hex(nb / 16, base);
	if (base)
		write(1, &upper_base[nb % 16], 1);
	else
		write(1, &lower_base[nb % 16], 1);
}
//Convertit nb dec en nb hexa et l'afficher sortie standard
//