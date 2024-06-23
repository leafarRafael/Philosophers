/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42so.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:12:32 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/23 15:14:44 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include "list.h"
#include <stdio.h>

static void ft_put(t_no *no);

void	ft_putphilo(t_lst *lst)
{
	t_no	*no;
	int		i;

	i = 0;
	no = lst->head;
	while (i < lst->size)
	{
		ft_put(no);
		no = no->next;
		i++;
	}
}

static void ft_put(t_no *no)
{
	printf("\nfilo numero %d\n", no->philo_nbr);
	printf("start %d\n", no->phi.start);
	printf("nbr_eat %d\n", no->phi.nbr_eat);
	printf("time_die %d\n", no->phi.time_die);
	printf("time_eat %d\n", no->phi.time_eat);
	printf("time_sleep %d\n", no->phi.time_sleep);
}