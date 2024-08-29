/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alijimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:27:13 by alijimen          #+#    #+#             */
/*   Updated: 2024/08/24 15:54:05 by alijimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len_d;
	unsigned int	len_s;

	len_d = 0;
	len_s = 0;
	while (dest[len_d])
		len_d++;
	while ((len_s < nb) && src[len_s])
	{
		dest[len_d] = src[len_s];
		len_d++;
		len_s++;
	}
	dest[len_d] = '\0';
	return (dest);
}
