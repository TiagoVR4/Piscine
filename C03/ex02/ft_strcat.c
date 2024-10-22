/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:49:32 by tiagalex          #+#    #+#             */
/*   Updated: 2024/09/16 13:24:31 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*i;

	i = dest;
	while (*i != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
		*i = *src;
		i++;
		src++;
	}
	*i = '\0';
	return (dest);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	char	*src = av[1];
	char	*dest = av[2];
	printf("%s", ft_strcat(src, dest));
}*/
