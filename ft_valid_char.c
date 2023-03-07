#include "ft_printf.h"

int	ft_valid_char(char c)
{
	int		i;
	char	*valid_char;

	i = 0;
	valid_char = "cspdiuxX%";
	while (valid_char[i])
	{
		if (valid_char[i] == c)
			return (1);
		i++;
	}
	return (0);
}