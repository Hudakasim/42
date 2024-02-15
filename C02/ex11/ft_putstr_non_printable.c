/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasimog <hkasimog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:13:20 by hkasimog          #+#    #+#             */
/*   Updated: 2024/02/12 11:47:16 by hkasimog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	to_hex(unsigned char a)
{
	char	*x;

	x = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(x[a / 16]);
	ft_putchar(x[a % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] < 32 || str[i] > 126))
		{
			ft_putchar(str[i]);
		}
		else
		{
			to_hex(str[i]);
		}
		i++;
	}
}
