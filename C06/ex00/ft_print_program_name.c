/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alijimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:28:50 by alijimen          #+#    #+#             */
/*   Updated: 2024/08/27 01:21:35 by alijimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}
