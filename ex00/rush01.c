/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmbele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 15:09:05 by kmbele            #+#    #+#             */
/*   Updated: 2020/01/12 15:09:15 by kmbele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	group(int x, int y)
{
	int	i;
	int	count;

	if (y > 1)
	{
		count = 0;
		while (count < (y - 2))
		{
			ft_putchar('\n');
			ft_putchar('*');
			i = 0;
			while (i < (x - 2))
			{
				ft_putchar(' ');
				++i;
			}
			if (x > 1)
				ft_putchar('*');
			++count;
		}
	}
}

void	project(int x, int y)
{
	int	i;

	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('\\');
		i = 0;
		while (i < (x - 2))
		{
			ft_putchar('*');
			++i;
		}
		if (x > 1)
			ft_putchar('/');
	}
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
		ft_putchar('/');
	i = 0;
	while (i < (x - 2) && y > 0)
	{
		ft_putchar('*');
		++i;
	}
	if (x > 1 && y > 0)
		ft_putchar('\\');
	group(x, y);
	project(x, y);
}
