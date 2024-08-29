/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:12:16 by hoysong           #+#    #+#             */
/*   Updated: 2024/08/29 15:47:06 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/*
 * Swap the first 2 elements at the top of stack a.
 * Do nothing if there is only one or no elements.
 */
void sa()
{
}

/*
 * this function will gen t_stacks.
 */
t_stacks	*gen_stacks()
{
	t_stacks *stacks;
	stacks = malloc(sizeof(t_stacks));
	if (stacks == 0)
		return (0);
	return (stacks);
}
