/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:29:24 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/20 14:36:25 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	add_back(t_lst *lst, void *content)
{
	t_no	*node;

	if (!lst || !content)
		return (1);
	node = init_node(content);
	lst->head = node;
	lst->last = node;
	lst->size++;
	return (1);
}
