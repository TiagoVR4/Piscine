/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:48:41 by tiagalex          #+#    #+#             */
/*   Updated: 2024/09/15 18:50:24 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	char	*str = argv[1];

	printf("%d\n", ft_str_is_lowercase(str));
}
*/
