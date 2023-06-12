#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

// typedef struct s_flags
// {
//     int		minus;
//     int		zero;
//     int		width;
//     int		precision;
//     int		star;
//     int		type;
//     int		len;
//     int		negative;
// }				t_flags;

// t_flags        ft_init_flags(void);
// int            ft_is_type(char c);

//####################### Main #######################

int	ft_printf(const char *str, ...);

//####################### Specifiers #######################

int	print_base(int arg, int base);
int	print_char(int arg);
int	print_int(int arg);
int print_percent(void);
int print_pointer(void *arg, int base);
int	print_string(char *arg);
int	print_unsign_int(unsigned int arg);

//####################### Utils #######################

void	ft_putchar(char c);
void	ft_putnbr_base(long int n, int base);

#endif