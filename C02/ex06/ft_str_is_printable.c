/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:41:53 by tiagalex          #+#    #+#             */
/*   Updated: 2024/09/18 16:05:43 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 31 || str[i] == 127)
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

	printf ("%d\n", ft_str_is_printable(str));
	printf ("%d", ft_str_is_printable("\n"));
}
*/
