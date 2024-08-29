/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alijimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:47:30 by alijimen          #+#    #+#             */
/*   Updated: 2024/08/25 18:10:20 by alijimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	number;

	number = 2;
	if (nb < 2)
		return (0);
	while (number <= nb / 2)
	{
		if (nb % number == 0)
			return (0);
		number++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = ft_is_prime(nb);
	if (prime == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
