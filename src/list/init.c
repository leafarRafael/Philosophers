/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:33:13 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/20 14:05:09 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	init_lst(t_lst	*lst)
{	
	lst->head = NULL;
	lst->last = NULL;
	lst->size = 0;
	
}