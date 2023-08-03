/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifications.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:31:15 by mpedroso          #+#    #+#             */
/*   Updated: 2023/07/24 17:31:37 by mpedroso         ###   ########.fr       */
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
	s_sort = stacks()->aux_sorted_stack;
	while (s_sort->next != NULL)
	{
		if (s_sort->value > s_sort->next->value)
		{
			swp = s_sort->value;
			s_sort->value = s_sort->next->value;
			s_sort->next->value = swp;
			s_sort = stacks()->aux_sorted_stack;
		}
		s_sort = s_sort->next;
	}
	s_sort = stacks()->aux_sorted_stack;
	while (s_sort->next != NULL)
	{
		if (s_sort->value == s_sort->next->value)
			return (0);
		s_sort = s_sort->next;
	}
	return (1);
}
