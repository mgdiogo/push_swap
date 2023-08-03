/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:03:48 by mpedroso          #+#    #+#             */
/*   Updated: 2023/08/03 19:16:51 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	send_b(int chunk, int div, int min, int max)
{
	int	i;

	i = 0;
	while (i < chunk)
	{
		if (div == 0 && stacks()->a->value >= INT_MIN 
			&& stacks()->a->value <= max)
		{
			ft_pb();
			i++;
		}
		else if (stacks()->a->value > min && stacks()->a->value <= max)
		{
			ft_pb();
			i++;
		}
		else
			ft_ra();
	}
}

int	max_b(void)
{
	int		i;
	t_node	*stack_b;

	i = INT_MIN;
	stack_b = stacks()->b;
	while (stack_b != NULL)
	{
		if (stack_b->value > i)
			i = stack_b->value;
		stack_b = stack_b->next;
	}
	return (i);
}

int	max_index(int max)
{
	int		i;
	t_node	*stack_b;

	i = 0;
	stack_b = stacks()->b;
	while (stack_b != NULL)
	{
		if (max == stack_b->value)
			break ;
		i++;
		stack_b = stack_b->next;
	}
	return (i);
}


void	sort_b(void)
{
	int	i;
	int	j;
	int	max;

	while (ft_lstsize(stacks()->b) > 0)
	{
		max = max_b();
		i = max_index(max);
		if (i == 0)
			ft_pa();
		else if (i <= (ft_lstsize(stacks()->b) / 2))
		{
			j = 0;
			while (j++ < i)
				ft_rb();
			ft_pa();
		}
		else
		{
			j = ft_lstsize(stacks()->b) - i;
			while (j-- > 0)
				ft_rrb();
			ft_pa();
		}
	}
}
