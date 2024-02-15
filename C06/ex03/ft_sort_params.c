/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasimog <hkasimog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:39:24 by hkasimog          #+#    #+#             */
/*   Updated: 2024/02/13 13:20:07 by hkasimog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	sort_args(int argnum, char *args[])
{
	int	swap;
	int	i;

	i = 1;
	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 1;
		while (i < argnum - 1)
		{
			if (ft_strcmp(args[i], args[i + 1]) > 0)
			{
				ft_swap(&args[i], &args[i + 1]);
				swap = 1;
			}
			i++;
		}
	}
}

int	main(int argnum, char *args[])
{
	int	i;

	if (argnum > 1)
	{
		sort_args(argnum, args);
	}
	i = 1;
	while (i < argnum)
	{
		ft_putstr(args[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
