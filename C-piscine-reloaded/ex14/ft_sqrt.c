/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:21:26 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/17 10:29:10 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	mid;

	mid = 1;
	if (nb < 0)
		return (0);
	while (mid * mid < nb)
		mid++;
	if (mid * mid == nb)
		return (mid);
	return (0);
}
	// int main(void)
// {
//     int number;
//     int result;

//     number = 5;
//     result = ft_sqrt(number);

//     printf("%d\n", result);
//     return (0);
// }
