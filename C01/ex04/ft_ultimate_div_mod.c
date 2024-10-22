/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:45:29 by tiagalex          #+#    #+#             */
/*   Updated: 2024/09/10 20:18:37 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
}
/*
int main()
{

	int	a = 5;
	int	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("division: %d, modulus: %d\n", a, b);
	return (0);
}
*/
