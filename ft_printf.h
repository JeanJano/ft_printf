/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsauvage <jsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:20:38 by jsauvage          #+#    #+#             */
/*   Updated: 2022/05/30 20:22:54 by jsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define LIBFT_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *s, ...);
void	ft_putstr(char *str, int *count, int *nb);
int		ft_strlen(const char *s);
void	ft_putchar(char c);
void	ft_putnbr(int n, int *count, int *i);
void	ft_putunnbr(unsigned int n, int *count, int *i);
void	ft_putnbr_base(unsigned long nbr, char *base);
void	ft_print_memory(unsigned long pointer, int *i, int *count);
char	*ft_itohex(unsigned long n, char *base);
void	ft_putc(char c, int *i, int *count);
char	*ft_itoa(long n);
void	ft_puthex(unsigned long n, char *base, int *count, int *i);
void	ft_putpercent(int *count, int *i, const char *s);

#endif