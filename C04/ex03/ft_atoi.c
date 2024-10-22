/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:33:05 by tiagalex          #+#    #+#             */
/*   Updated: 2024/10/18 11:29:21 by tiagalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_atoi(char *str)
{
	int i;
	int r;
	int signal;

	r = 0;
	signal = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * signal);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;

	printf("%d\n", ft_atoi(argv[1]));
}*/
