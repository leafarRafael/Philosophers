/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_thread.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42so.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:51:35 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/23 15:29:16 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "philo.h"
#include <pthread.h>

static void	set_pthread(t_phi *phi, t_data *input);

void	init_list_thread(t_phi *phi, t_data *input, t_lst *lst)
{
	int	i;

	i = 0;
	set_pthread(phi, input);
	while (i < input->nbr_filo)
	{
		add_back(lst, phi);
		i++;
		lst->last->philo_nbr = i;
	}
}

static void	set_pthread(t_phi *phi, t_data *input)
{
	phi->time_die = input->time_die;
	phi->time_eat = input->time_eat;
	phi->time_sleep = input->time_sleep;
	phi->nbr_eat = input->nbr_eat;
	phi->start = input->start;
}
