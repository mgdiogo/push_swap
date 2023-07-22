/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 23:50:56 by mpedroso          #+#    #+#             */
/*   Updated: 2023/07/22 01:09:06 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_node **stack)
{
	t_node	*first;
	t_node	*second;

	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	ft_sa(void)
{
	ft_swap(&stacks()->a);
	write(1, "sa\n", 3);
}

void	ft_sb(void)
{
	ft_swap(&stacks()->b);
	write(1, "sb\n", 3);
}

void	ft_ss(void)
{
	ft_swap(&stacks()->a);
	ft_swap(&stacks()->b);
	write (1, "ss\n", 3);
}
