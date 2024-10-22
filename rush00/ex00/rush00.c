/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:36:30 by tiagalex          #+#    #+#             */
/*   Updated: 2024/09/08 13:56:43 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_lines(int x, int begin, int middle, int end)
{
	int	columns;

	columns = 1;
	while (columns <= x)
	{
		if (columns == 1)
		{
			ft_putchar(begin);
		}
		else if (columns == x)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(middle);
		}
		columns++;
	}
	ft_putchar('\n');
}

int	check_requirements(int x, int y)
{
	if ((x < 1 || y < 1) && (x > 2147483647 || y > 2147483647))
	{
		write(1, "Invalid input", 13);
		ft_putchar('\n');
		return (1);
	}
	return (0);
}

void	rush(int x, int y)
{
	int	lines;

	if (check_requirements(int x, int y) == 0)
	{
		lines = 1;
		while (lines <= y)
		{
			if (lines == 1)
			{
				print_lines(x, 'o', '-', 'o');
			}
			else if (lines == y)
			{
				print_lines(x, 'o', '-', 'o');
			}
			else
			{
				print_lines(x, '|', ' ', '|');
			}
			lines++;
		}
	}
}
