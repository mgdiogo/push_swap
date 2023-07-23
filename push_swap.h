/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:36:05 by migas             #+#    #+#             */
/*   Updated: 2023/07/23 21:08:59 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

typedef struct s_stacks
{
	t_node			*a;
	t_node			*b;
	t_node			*double_check;
}					t_stacks;

int					ft_atoi(char *str);
t_node				*ft_lstnew(long n);
int					ft_lstsize(t_node *stack);
void				ft_lstadd_back(t_node **stack, t_node *new_node);
t_node				*ft_lstlast(t_node *stack);
t_stacks			*stacks(void);
int					fill_stack(char **values);
void				ft_pb(void);
void				ft_pa(void);
void				ft_push(t_node **from_x, t_node **to_x);
void				ft_swap(t_node **stack);
void				ft_sa(void);
void				ft_sb(void);
void				ft_ss(void);
void				ft_rotate(t_node **stack);
void				ft_ra(void);
void				ft_rb(void);
void				ft_rr(void);
void				ft_reverse(t_node **stack);
void				ft_rra(void);
void				ft_rrb(void);
void				ft_rrr(void);

#endif
