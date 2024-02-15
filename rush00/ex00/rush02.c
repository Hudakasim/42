/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoguzlar <aoguzlar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:14:07 by aoguzlar          #+#    #+#             */
/*   Updated: 2024/01/28 18:54:51 by aoguzlar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	first_row(int x, int a)
{
	if (a == x || a == 1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('B');
	}
}

void	last_row(int x, int a)
{
	if (a == x || a == 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	other_rows(int x, int a)
{
	if (a == x || a == 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

int	control(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write (1, "You entered invalid value!\n", 30);
		return (2);
	}
	else
	{
		return (0);
	}
}

void	rush(int x, int y)
{
	int		a;
	int		b;

	if (control(x, y) == 0)
	{
		b = y;
		while (b > 0)
		{
			a = x;
			while (a > 0)
			{
				if (b == y)
					first_row(x, a);
				else if (b == 1)
					last_row(x, a);
				else
					other_rows(x, a);
				a--;
			}
			ft_putchar('\n');
			b--;
		}
	}
}
