/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:15:03 by mpedroso          #+#    #+#             */
/*   Updated: 2023/07/22 01:40:57 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	first = *stack;
	last = ft_lstlast(*stack);
	last->next = first;
	*stack = (*stack)->next;
	first->next = NULL;
}

void	ft_ra(void)
{
	ft_rotate(&stacks()->a);
	write (1, "ra\n", 3);
}

void	ft_rb(void)
{
	ft_rotate(&stacks()->b);
	write (1, "rb\n", 3);
}

void	ft_rr(void)
{
	ft_rotate(&stacks()->a);
	ft_rotate(&stacks()->b);
	write (1, "rr\n", 3);
}
