/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lkdlist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoysong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 17:51:24 by hoysong           #+#    #+#             */
/*   Updated: 2024/08/19 01:01:17 by hoysong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LKDLIST_H
# define LKDLIST_H
# include <stdlib.h>

/* == Singly_linked_list == */
typedef struct s_node
{
	struct s_node	*next_node;
	void			*data;
}	t_node;

int		init_node(t_node **node);
void	insert_node(t_node *dest, t_node *new_node);
int		find_tail_node(t_node *head, t_node **last_node);
void	destroy_node(t_node *node);

/* == Doubly_linked_list == */
typedef struct s_doubly_node
{
	struct s_doubly_node	*next_node;
	struct s_doubly_node	*prev_node;
	void					*data;
}	t_dnode;

/*
	== init_dubl ==
	1. description
		this function will memory allocate to doubly list's node.
		and also initialize it's data to zero.
		(like next_node, prev_node, data).
	2. return value
		memory allocated node
 */
t_dnode	*init_dubl(void);
t_dnode	*find_head_dubly(t_dnode *doubly_node);
t_dnode	*find_tail_dubly(t_dnode *doubly_node);
t_dnode	*insert_data_dubl(t_dnode *doubly_node, void *src);

void	insert_dubl(t_dnode *dest, t_dnode *new_node);
void	insert_chain(t_dnode *dest, t_dnode *linked_node);
void	destroy_next_chain(t_dnode *doubly_node);
void	destroy_prev_chain(t_dnode *doubly_node);
void	destroy_doubly_list(t_dnode *doubly_node);

#endif
