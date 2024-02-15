/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasimog <hkasimog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:28:37 by hkasimog          #+#    #+#             */
/*   Updated: 2024/02/11 11:30:38 by hkasimog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argnum, char *args[])
{
	int	i;
	int	j;

	i = argnum - 1;
	j = 0;
	if (argnum > 1)
	{
		while (i > 0)
		{
			j = 0;
			while (args[i][j] != '\0')
			{
				write(1, &args[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
