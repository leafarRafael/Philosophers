/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_arguments.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:48:09 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/22 12:57:02 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "philo.h"
# include "lib.h"

int	ft_setarg(t_data	*input, int argc, char *argv[])
{
	input->nbr_filo= ft_atoi(argv[1]);
	input->time_die = ft_atoi(argv[2]);
	input->time_eat = ft_atoi(argv[3]);
	input->time_sleep = ft_atoi(argv[4]);
	input->nbr_eat = -1;
	if (argc == 6)
		input->nbr_eat = ft_atoi(argv[5]);
	return(0);
}
