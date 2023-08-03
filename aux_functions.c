/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:41:46 by mpedroso          #+#    #+#             */
/*   Updated: 2023/08/03 19:25:50 by mpedroso         ###   ########.fr       */
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
		i++;
	}
	else if (str[0] == '+')
		i++;
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

void	sort_list_reverse(void)
{
	t_node	*lst;
	int		temp;
	int		swapped;

	swapped = 0;
	while (!swapped)
	{
		lst = stacks()->aux_sorted_stack;
		swapped = 1;
		while (lst->next)
		{
			if (lst->value < lst->next->value)
			{
				temp = lst->value;
				lst->value = lst->next->value;
				lst->next->value = temp;
				swapped = 0;
			}
			lst = lst->next;
		}
	}
}

void	handle_frees(t_node *stack)
{
	t_node	*temp;

	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
}

void	free_stacks(void)
{
	handle_frees(stacks()->a);
	handle_frees(stacks()->b);
	handle_frees(stacks()->aux_sorted_stack);
}

