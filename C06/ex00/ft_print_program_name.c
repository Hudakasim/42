/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasimog <hkasimog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:33:39 by hkasimog          #+#    #+#             */
/*   Updated: 2024/02/13 12:32:23 by hkasimog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argnum, char *args[])
{
	int	i;

	i = 0;
	if (argnum != 0)
	{
		while (args[0][i])
			i++;
	}
	write(1, args[0], i);
	write(1, "\n", 1);
	return (0);
}
