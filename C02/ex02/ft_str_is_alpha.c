/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:23:52 by tiagalex          #+#    #+#             */
/*   Updated: 2024/09/15 18:22:32 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	char	 *str = argv[1];

	printf("%d\n", ft_str_is_alpha(str));
}*/
