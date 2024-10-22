/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:50:12 by tiagalex          #+#    #+#             */
/*   Updated: 2024/09/10 17:33:26 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int main()
{
	int x = 1, y = 2;

	printf("original: x = %d, y = %d\n", x, y);

	ft_swap(&x, &y);

	printf("traded: x = %d, y = %d\n", x, y);

	return 0;
}
*/
