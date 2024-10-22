/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:03:22 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/17 15:37:38 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*range;
	int	i;
	int	min = 10;
	int	max = 8;
	
	range = ft_range(min, max);
	
	if (range)
	{
		i = 0;
		while (i < (max - min))
		{
			printf("%d ", range[i]);
			i++;
		}
        free(range);
	}
	else
	{
		printf("fail\n");
	}
	return 0;
}
*/
