/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-v <gsilva-v@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 23:15:04 by gsilva-v          #+#    #+#             */
/*   Updated: 2021/11/20 13:09:43 by gsilva-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack_a)
{
	int	i;

	i = stack_a->top;
	if (stack_a->top == -1)
		return (TRUE);
	while (i >= 1)
	{
		if (stack_a->numbers[i] > stack_a->numbers[i - 1])
			return (FALSE);
		i--;
	}
	return (TRUE);
}

int	is_rev_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->top == -1)
		return (TRUE);
	while (i <= stack->top)
	{
		if (stack->numbers[i] < stack->numbers[i - 1])
			return (FALSE);
		i++;
	}
	return (TRUE);
}
