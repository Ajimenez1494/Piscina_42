/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alijimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:08:42 by alijimen          #+#    #+#             */
/*   Updated: 2024/08/25 17:13:44 by alijimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (index);
	if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
