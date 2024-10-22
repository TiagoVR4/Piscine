/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:58:21 by tiagalex          #+#    #+#             */
/*   Updated: 2024/09/15 20:36:50 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int 	main (int argc, char **argv)
{
	(void)argc;

	int	result = ft_strcmp(argv[1], argv[2]);

	if (result == 0)
		printf("Strings are equal\n");
	else if (result < 0)
		printf("String 1 is less than String 2\n");
	else 
	printf ("String 1 is greater than String 2\n");

	return 0;
}
*/
