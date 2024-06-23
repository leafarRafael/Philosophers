/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:32:15 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/22 13:07:55 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include "lib.h"
#include "list.h"
#include <stdio.h>

void	set_pthread(t_phi *phi, t_data *input);
void	init_list_thread(t_phi *phi, t_data *input, t_lst *lst);
void	put_pthread(t_lst *lst);

int	main(int argc, char *argv[])
{
	t_data	input;
	t_lst	lst;
	t_phi	phi;

	init_lst(&lst);
	if (valid_arguments(argc, argv))
		return (1);
	if (ft_setarg(&input, argc, argv))
		return (1);
	init_list_thread(&phi, &input, &lst);
	put_pthread(&lst);
	return (0);
}


void	init_list_thread(t_phi *phi, t_data *input, t_lst *lst)
{
	int	i;

	i = 0;
	set_pthread(phi, input);
	while (i < input->nbr_filo)
	{	
		add_back(lst, phi);
		i++;
	}
}

void	set_pthread(t_phi *phi, t_data *input)
{
	phi->time_die = input->time_die;
	phi->time_eat = input->time_eat;
	phi->time_sleep = input->time_sleep;
	phi->nbr_eat = input->nbr_eat;
}

void	put_pthread(t_lst *lst)
{
	int	i;
	t_no *no;

	i = 1;
	no = lst->head;
	while (i <= lst->size)
	{
		printf("pthread %d\n", i);
		printf("%d\n", no->phi.nbr_eat);
		printf("%d\n", no->phi.time_die);
		printf("%d\n", no->phi.time_eat);
		printf("%d\n", no->phi.time_sleep);
		no = no->next;
		i++;
	}
	
}