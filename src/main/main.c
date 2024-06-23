/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42so.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:32:15 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/23 15:21:46 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include "valid.h"
#include "lib.h"
#include "list.h"
#include "init_thread.h"
#include <sys/time.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include "debug.h"

int	main(int argc, char *argv[])
{
	t_data			input;
	t_lst			lst;
	t_phi			phi;

	if (valid_arguments(argc, argv))
		return (1);
	if (ft_setarg(&input, argc, argv))
		return (1);
	init_lst(&lst);
	init_list_thread(&phi, &input, &lst);
	ft_putphilo(&lst);
	return (0);
}

unsigned int get_time(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}
