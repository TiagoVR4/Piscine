/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:01 by tiagalex          #+#    #+#             */
/*   Updated: 2024/09/16 11:41:25 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main (int argc, char **argv)
{
	(void)argc;

	unsigned int n = *argv[3];
	int	result = ft_strncmp(argv[1], argv[2], n);

	if (result == 0)
		printf ("Both string are equal\n");
	else if (result < 0)
		printf ("String 1 is less than String 2");
	else
		printf("String 1 is greater than String 2");
	return 0;
}
*/
