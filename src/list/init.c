/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:33:13 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/22 12:46:19 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "philo.h"
#include <stdlib.h>

void	init_lst(t_lst	*lst)
{
	lst->head = NULL;
	lst->last = NULL;
	lst->size = 0;
}

void	init_node(t_phi *cnt, t_no *node)
{
	node->next = node;
	node->prev = node;
	node->phi = *cnt;
	pthread_mutex_init(&node->forks, NULL);
}
