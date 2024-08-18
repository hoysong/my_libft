/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lkdlist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:54:51 by hoysong           #+#    #+#             */
/*   Updated: 2024/08/19 00:41:25 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lkdlist.h"

t_dnode	*find_head_dubly(t_dnode *dubly_node)
{
	while (dubly_node->prev_node != NULL)
		dubly_node = dubly_node->prev_node;
	return (dubly_node);
}

t_dnode	*find_tail_dubly(t_dnode *dubly_node)
{
	while (dubly_node->next_node != NULL)
		dubly_node = dubly_node->next_node;
	return (dubly_node);
}

/*
	== insert_dubl ==
	1. description
		insert new_node btw 2 nodes.
		new_node should be single node not linked nodes.
		
	2. return value
		none.
 */
void	insert_dubl(t_dnode *dest, t_dnode *new_node)
{
	new_node->next_node = dest->next_node;
	if (dest->next_node != 0)
		new_node->next_node->prev_node = new_node;
	new_node->prev_node = dest;
	dest->next_node = new_node;
}

/*
	1. Description
		This function can insert linked nodes
		in the middle of the doubly linked-list.
		parameter's can be...
		1. node in the middle of the doubly linked-list.
		2. head or tail node.
	2. return value
		none
 */
void	insert_chain(t_dnode *dest, t_dnode *src_node)
{
	t_dnode	*head;
	t_dnode	*tail;

	head = find_head_dubly(src_node);
	tail = find_tail_dubly(src_node);
	tail->next_node = dest->next_node;
	if (dest->next_node != 0)
		dest->next_node->prev_node = tail;
	dest->next_node = head;
	head->prev_node = dest;
}

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

/*
	== init_dubl ==
	1. description
		this function will memory allocate to doubly list's node.
		and also initialize it's data to zero.
		(like next_node, prev_node, data).
	2. return value
		memory allocated node
 */

t_dnode	*init_dubl(void)
{
	t_dnode	*node;

	node = malloc(sizeof(t_dnode));
	if (node == NULL)
		return (0);
	node->next_node = 0;
	node->prev_node = 0;
	node->data = 0;
	return (node);
}
