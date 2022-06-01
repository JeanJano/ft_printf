/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsauvage <jsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:36:40 by jsauvage          #+#    #+#             */
/*   Updated: 2022/05/31 14:36:41 by jsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putc(char c, int *i, int *count)
{
	ft_putchar(c);
	*i += 2;
	*count += 1;
}

void	ft_putpercent(int *count, int *i, const char *s)
{
	while (s[*i] == '%' && s[*i + 1] == '%')
		ft_putc('%', i, count);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
