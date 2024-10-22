/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:42:22 by tiagalex          #+#    #+#             */
/*   Updated: 2024/09/10 19:26:34 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int	a = 7;
	int 	b = 3;
	int	div, mob;

	ft_div_mod(a, b, &div, &mob);
	printf("division: %d, modulus: %d\n", div, mob);
	return (0);
}
*/
