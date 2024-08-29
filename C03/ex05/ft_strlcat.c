/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alijimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:58:28 by alijimen          #+#    #+#             */
/*   Updated: 2024/08/24 17:49:47 by alijimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	dest_size;
	unsigned int	i;

	src_size = 0;
	dest_size = 0;
	i = 0;
	while (src[src_size])
		src_size++;
	if (size == 0)
		return (src_size);
	while (dest[dest_size])
		dest_size++;
	if (size <= dest_size)
		return (size + src_size);
	while (size && (--size - dest_size) && src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}
