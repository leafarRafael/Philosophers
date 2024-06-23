/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:29:24 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/22 12:45:03 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	add_back(t_lst *lst, t_phi *content)
{
	init_node(content, &lst->node[lst->size]);
	if (lst->size == 0)
	{
		lst->head = &lst->node[lst->size];
		lst->last = &lst->node[lst->size];
	}
	if (lst->size == 1)
	{
		lst->node[lst->size].next = lst->head;
		lst->node[lst->size].prev = lst->head;
		lst->head->next = &lst->node[lst->size];
		lst->head->prev = &lst->node[lst->size];
		lst->last = &lst->node[lst->size];
	}
	else
	{
		lst->node[lst->size].next = lst->head;
		lst->node[lst->size].prev = lst->last;
		lst->last->next = &lst->node[lst->size];
		lst->head->prev = &lst->node[lst->size];
		lst->last = &lst->node[lst->size];
	}
	lst->size++;
	return (1);
}
