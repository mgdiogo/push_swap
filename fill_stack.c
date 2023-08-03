/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:20:23 by mpedroso          #+#    #+#             */
/*   Updated: 2023/08/03 19:30:17 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_sl(t_node *stack);

int	fill_stack(char **values)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (values && values[i])
	{
		ft_lstadd_back(&(stacks()->a), ft_lstnew(ft_atoi(values[i])));
		ft_lstadd_back(&(stacks()->aux_sorted_stack),
			ft_lstnew(ft_atoi(values[i])));
		i++;
	}
	if (!check_doubles() || !check_sorted())
		return (0);
	sort_list_reverse();
	k = find_sl(stacks()->aux_sorted_stack);
	j = ft_lstsize(stacks()->aux_sorted_stack);
	if (j <= 5)
		sort_five(stacks()->aux_sorted_stack, k);
	else if (j < 50)
		sort_list(j / 2, 2, j % 2);
	else
		sort_list(j / 5, 5, j % 5);
	return (1);
}

int	find_sl(t_node *stack)
{
	int	second_last;

	while (stack->next != NULL)
	{
		if (stack->next->value == ft_lstlast(stack)->value)
		{
			second_last = stack->value;
			break ;
		}
		stack = stack->next;
	}
	return (second_last);
}

void	sort_five(t_node *stack, int second_last)
{
	while (ft_lstsize(stacks()->a) > 3)
	{
		if (stacks()->a->value == ft_lstlast(stack)->value)
			ft_pb();
		else if (stacks()->a->value == second_last)
			ft_pb();
		else
			ft_ra();
	}
	if ((stacks()->a->value > stacks()->a->next->value)
		&& (stacks()->a->value > ft_lstlast(stacks()->a)->value))
		ft_ra();
	else if ((stacks()->a->next->value > stacks()->a->value)
		&& (stacks()->a->next->value > ft_lstlast(stacks()->a)->value))
		ft_rra();
	if (stacks()->a->value > stacks()->a->next->value)
		ft_sa();
	while (ft_lstsize(stacks()->b) > 0)
		ft_pa();
	if (stacks()->a->value > stacks()->a->next->value)
		ft_sa();
}

void	sort_list(int chunk, int div, int mod)
{
	int	min;
	int	max;

	max = INT_MAX;
	while (div--)
	{
		min = find_smallest(&stacks()->aux_sorted_stack, chunk);
		if (div == 0)
			chunk += mod;
		send_b(chunk, div, min, max);
		sort_b();
		max = stacks()->a->value - 1;
	}
}

int	find_smallest(t_node **sorted, int chunk)
{
	int			i;
	static int	j;
	t_node		*stack;

	j += chunk;
	i = j;
	stack = *sorted;
	while (i > 0 && (stack->next != NULL))
	{
		i--;
		stack = stack->next;
	}
	return (stack->value);
}
