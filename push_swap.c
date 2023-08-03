/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:36:11 by migas             #+#    #+#             */
/*   Updated: 2023/08/03 19:36:33 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	else if (!fill_stack(&argv[1]))
	{
		if (!check_sorted())
			return (0);
		else 
			write (1, "Error!", 7);
	}
	free_stacks();
	return (0);
}
