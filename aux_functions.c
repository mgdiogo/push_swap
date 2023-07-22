/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:41:46 by mpedroso          #+#    #+#             */
/*   Updated: 2023/07/21 22:35:41 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	int		i;
	long	res;
	int		signal;

	i = -1;
	res = 0;
	signal = 1;
	if (str[0] == '-')
	{
		signal *= -1;
		i += 2;
	}
	else if (str[0] == '+')
		i += 2;
	while (str[++i])
	{
		if (str[i] <= '9' && str[i] >= '0')
			res = (res * 10) + str[i] - 48;
		else
		{
			write(1, "Error!\n", 7);
			exit(1);
		}
	}
	return (res * signal);
}

t_stacks	*stacks(void)
{
	static t_stacks	stacks;

	return (&stacks);
}


