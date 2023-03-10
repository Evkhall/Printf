#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int				ft_printf(const char *str, ...);
int				ft_valid_char(char c);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
void			ft_putnbr(int n);
void			ft_putnbr_unsigned(unsigned int n);
void			ft_what_percentage(char c, va_list ap);
void			ft_dec_to_hex(unsigned int n, int base);
int				ft_add_sum(char c, va_list ap);
int				ft_nbrlen(int nb);
int				ft_size_hexa(unsigned int n);
void			ft_ptr(unsigned long long int n);
int				ft_size_ptr(unsigned long long int n);
unsigned int	ft_nbrlen_unsigned(unsigned int n);
int				ft_add_sum_c(char c);

#endif