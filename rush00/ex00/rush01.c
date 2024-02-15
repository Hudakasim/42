/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoguzlar <aoguzlar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:14:07 by aoguzlar          #+#    #+#             */
/*   Updated: 2024/01/28 19:07:01 by aoguzlar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	first_row(int x, int a)
{
	if (a == x)
	{
		ft_putchar('/');
	}
	else if (a == 1)
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
}

void	last_row(int x, int a)
{
	if (a == x)
	{
		ft_putchar('\\');
	}
	else if (a == 1)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
}

void	other_rows(int x, int a)
{
	if (a == x || a == 1)
	{
		ft_putchar('*');
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
