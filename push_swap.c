/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:36:11 by migas             #+#    #+#             */
/*   Updated: 2023/07/23 21:09:11 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*temp;

	if (argc < 2)
	{
		write (1, "Error!", 7);
		return (0);
	}
	else if (!(fill_stack(&argv[1])))
	{
		write (1, "Error!", 7);
		return (0);
	}
	ft_rra();
	temp = stacks()->a;
	while (temp)
	{
		printf("Stack a: %i\n", temp->value);
		temp = temp->next;
	}
	return (0);
}
