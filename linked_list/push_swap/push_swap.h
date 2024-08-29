/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:58:48 by hoysong           #+#    #+#             */
/*   Updated: 2024/08/29 15:25:55 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../lkdlist.h"

/*
	1. description
		the t_stacks struct have 4 members.
		- t_dnode *a_head
		- t_dnode *a_tail
		- t_dnode *b_head
		- t_dnode *b_tail
 */
typedef struct s_stacks
{
	t_dnode *a_head;
	t_dnode *a_tail;
	t_dnode *b_head;
	t_dnode *b_tail;
} t_stacks;

# endif
