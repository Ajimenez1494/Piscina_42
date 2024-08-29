/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:55:12 by rocgarci          #+#    #+#             */
/*   Updated: 2024/08/11 15:59:30 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	upper_part(int x)
{
	int	column_count;

	column_count = x;
	ft_putchar('/');
	while (--column_count > 1)
	{
		ft_putchar('*');
	}
	if (column_count == 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	medium_part(int x, int y)
{
	int	row_count;
	int	column_count;

	row_count = 1;
	while (row_count < y - 1)
	{
		column_count = x;
		ft_putchar('*');
		while (--column_count > 1)
		{
			ft_putchar(' ');
		}
		if (x > 1)
		{
			ft_putchar('*');
		}
		ft_putchar('\n');
		row_count++;
	}
}

void	lower_part(int x)
{
	int	column_count;

	column_count = x;
	ft_putchar('\\');
	while (--column_count > 1)
	{
		ft_putchar('*');
	}
	if (x > 1)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

int	rush(int x, int y)
{
	if ((x > 0 && y > 0) && (x < 342 && y < 342))
	{
		upper_part(x);
		if (y > 1)
		{
			medium_part(x, y);
			lower_part(x);
		}
	}
	else
	{
		return (0);
	}
	return (0);
}
