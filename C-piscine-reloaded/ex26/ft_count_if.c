/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:59:32 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/18 16:15:03 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}