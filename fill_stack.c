/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:20:23 by mpedroso          #+#    #+#             */
/*   Updated: 2023/07/19 16:42:23 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(void)
{
	t_node	*check;

	check = stacks()->a;
	while (check->next && (check->next->value > check->value))
		check = check->next;
	if (check->next == NULL)
		return (0);
	return (1);
}

int	check_doubles(void)
{
	int		swp;
	t_node	*s_sort;

	swp = 0;
	s_sort = stacks()->double_check;
	while (s_sort->next != NULL)
	{
		if (s_sort->value > s_sort->next->value)
		{
			swp = s_sort->value;
			s_sort->value = s_sort->next->value;
			s_sort->next->value = swp;
			s_sort = stacks()->double_check;
		}
		s_sort = s_sort->next;
	}
	s_sort = stacks()->double_check;
	while (s_sort->next != NULL)
	{
		if (s_sort->value == s_sort->next->value)
			return (0);
		s_sort = s_sort->next;
	}
	return (1);
}

int	fill_stack(char **values)
{
	int	i;

	i = 0;
	while (values && values[i])
	{
		ft_lstadd_back(&(stacks()->a), ft_lstnew(ft_atoi(values[i])));
		ft_lstadd_back(&(stacks()->double_check),
			ft_lstnew(ft_atoi(values[i])));
		i++;
	}
	if (!check_doubles() || !check_sorted())
		return (0);
	return (1);
}
