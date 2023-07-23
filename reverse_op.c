/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:48:56 by mpedroso          #+#    #+#             */
/*   Updated: 2023/07/23 21:43:35 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse(t_node **stack)
{
	int		i;
	int		pos;
	t_node	*temp;
	t_node	*blast;

	i = 0;
	temp = *stack;
	pos = ft_lstsize(*stack);
	while (i < pos - 2)
	{
		temp = temp->next;
		i++;
	}
	blast = temp;
	blast->next->next = *stack;
	*stack = blast->next;
	blast->next = NULL;
}

void	ft_rra(void)
{
	ft_reverse(&stacks()->a);
	write (1, "rra\n", 4);
}

void	ft_rrb(void)
{
	ft_reverse(&stacks()->b);
	write (1, "rrb\n", 4);
}

void	ft_rrr(void)
{
	ft_reverse(&stacks()->a);
	ft_reverse(&stacks()->b);
	write (1, "rrr\n", 4);
}
