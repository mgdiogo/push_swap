/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 22:45:32 by mpedroso          #+#    #+#             */
/*   Updated: 2023/07/22 01:06:41 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_node **from_x, t_node **to_x)
{
	t_node	*tmp;

	tmp = *from_x;
	*from_x = (*from_x)->next;
	tmp->next = *to_x;
	*to_x = tmp;
}

void	ft_pb(void)
{
	ft_push(&stacks()->a, &stacks()->b);
	write(1, "pb\n", 3);
}

void	ft_pa(void)
{
	ft_push(&stacks()->b, &stacks()->a);
	write(1, "pa\n", 3);
}

