/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:48:45 by tiagalex          #+#    #+#             */
/*   Updated: 2024/09/17 15:05:17 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
			{
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main(int ac, char **av)
{
    (void)ac;

    char    *str = av[1];
    char    *to_find = av[2];

    char *result = ft_strstr(av[1], av[2]);

    if (result)
        printf ("substring found: %s\n", result);
    else
        printf ("substring not found \n");

    return (0);
}
*/
