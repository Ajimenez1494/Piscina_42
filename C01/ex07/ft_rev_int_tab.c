/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alijimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:17:45 by alijimen          #+#    #+#             */
/*   Updated: 2024/08/14 16:46:28 by alijimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	initial;
	int	final;

	initial = 0;
	final = size -1;
	while (initial < final)
	{
		aux = tab[initial];
		tab[initial] = tab[final];
		tab[final] = aux;
		initial++;
		final--;
	}
}
