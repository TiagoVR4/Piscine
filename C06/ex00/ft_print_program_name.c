/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:09:13 by tiagalex          #+#    #+#             */
/*   Updated: 2024/09/26 10:34:26 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;

	len = 0;
	if (argc == 1)
	{
		while (argv[0][len] != '\0')
		{
			write (1, &argv[0][len], 1);
			len++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
