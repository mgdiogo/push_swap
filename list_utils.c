/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:38:01 by mpedroso          #+#    #+#             */
/*   Updated: 2023/07/22 01:37:09 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lstnew(long n)
{
	t_node	*node;

	if (n < -2147483648 || n > 2147483647)
	{
		node = NULL;
		return (node);
	}
	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = n;
	node->next = NULL;
	return (node);
}

int	ft_lstsize(t_node *stack)
{
	int	i;

	i = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

void	ft_lstadd_back(t_node **stack, t_node *new_node)
{
	t_node	*temp;

	temp = *stack;
	if (!*stack)
	{
		*stack = new_node;
		return ;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
}

t_node	*ft_lstlast(t_node *stack)
{
	if (!stack)
		return (0);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}
