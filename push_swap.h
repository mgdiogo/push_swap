/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:36:05 by migas             #+#    #+#             */
/*   Updated: 2023/08/03 19:01:29 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

typedef struct s_stacks
{
	t_node			*a;
	t_node			*b;
	t_node			*aux_sorted_stack;
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
void				sort_list_reverse(void);
void				handle_frees(t_node *stack);
void				free_stacks(void);
int					find_sl(t_node *stack);
void				sort_five(t_node *stack, int second_last);
void				sort_list(int chunk, int div, int mod);
int					find_smallest(t_node **sorted, int chunk);
void				send_b(int chunk, int div, int min, int max);
void				sort_b(void);
int					check_sorted(void);
int					check_doubles(void);

#endif
