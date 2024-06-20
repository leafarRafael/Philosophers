/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:33:13 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/20 14:35:07 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	init_lst(t_lst	*lst)
{	
	lst->head = NULL;
	lst->last = NULL;
	lst->size = 0;
}

t_no	*init_node(void *content)
{
	t_no	*node;

	if (!content)
		return (NULL);
	node = malloc(sizeof(t_no));
	if (!node)
		return (NULL);
	node->next = node;
	node->prev = node;
	node->un = content;
	return (node);
}
