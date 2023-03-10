/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaugra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:55:12 by abeaugra          #+#    #+#             */
/*   Updated: 2023/03/10 13:04:31 by abeaugra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack *stack_a;
	t_stack *stack_b;
	if(ac > 1)
	{
		stack_a = NULL;
		stack_b = NULL;
		stack_a = put_arg(av+1);
		if (!(ft_croissant(stack_a)))
		{
			if(lstsize(stack_a) <= 3)
				sort_3(stack_a);
			else if(lstsize(stack_a) <= 5)
				sort_5(stack_a, stack_b);
			else
				sort(stack_a, stack_b);
		}
	}
	clear_stack(0,2);
}
