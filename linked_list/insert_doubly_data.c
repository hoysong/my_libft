/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_doubly_data.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:54:51 by hoysong           #+#    #+#             */
/*   Updated: 2024/08/19 00:46:38 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lkdlist.h"
/*
	== doubly_node ==
	1. description.
		If doubly_node's next_node is NULL,
		function will init_dubl() to next_node.
		and then, insert src to next_node's data.
		If next_node is not null function will check prev_node.
		If prev_node is null it will init_dubl() prev_node.
		and insert src to prev_node's data
	2. return value
		next_node or prev_node.
		If prev_node and next_node isn't null it will return zero.
 */

t_dnode	*insert_data_dubl(t_dnode *doubly_node, void *src)
{
	if (doubly_node->next_node == 0)
	{
		doubly_node->next_node = init_dubl();
		doubly_node->next_node->data = src;
		doubly_node->next_node->prev_node = doubly_node;
		return (doubly_node->next_node);
	}
	else if (doubly_node->prev_node == 0)
	{
		doubly_node->prev_node = init_dubl();
		doubly_node->prev_node->data = src;
		doubly_node->prev_node->next_node = doubly_node;
		return (doubly_node->prev_node);
	}
	return (0);
}
