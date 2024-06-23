/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:29:31 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/22 12:59:19 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
 #define LIST_H

#include "list.h"
# include <pthread.h>

typedef struct	s_philo
{
	unsigned int	time_die;
	unsigned int	time_eat;
	unsigned int	time_sleep;
	unsigned int	nbr_eat;
}			t_phi;

typedef struct s_no
{
	t_phi			phi;
	pthread_mutex_t	forks;
	struct s_no		*next;
	struct s_no		*prev;
}		t_no;

typedef struct s_lst
{
	t_no	node[200];
	t_no	*head;
	t_no	*last;
	int		size;
}		t_lst;

void	init_lst(t_lst *lst);
void	init_node(t_phi *cnt, t_no *node);
int		add_back(t_lst *lst, t_phi *content);

#endif