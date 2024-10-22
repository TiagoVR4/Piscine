/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:26:27 by tiagalex          #+#    #+#             */
/*   Updated: 2024/09/16 17:35:35 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*i;

	i = dest;
	while (*i != '\0')
	{
		i++;
	}
	while (nb-- && *src != '\0')
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
	unsigned int nb = *av[3];
	char *src = av[2];
	char *dest = av[1];
	printf("%s", ft_strncat(src, dest, nb));
}
*/
