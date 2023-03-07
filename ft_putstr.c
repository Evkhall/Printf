#include "ft_printf.h"

void	ft_putstr(char *str)
{
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return ;
	}
	while (*str)
		write(1, str++, 1);
}