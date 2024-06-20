/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:32:15 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/20 18:02:06 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	ft_setarg(unsigned int	type[6], int argc, char *argv[]);

int	main(int argc, char *argv[])
{
	unsigned int	type[6];
//	t_lst	lst;

	if (valid_arguments(argc, argv))
		return (1);
	if (ft_setarg(type, argc, argv))
		return (1);
	return (0);
}

static int	ft_setarg(unsigned int type[6], int argc, char *argv[])
{
	type[NBR_PHILO] = ft_atoi(argv[1]);
	type[TIME_DIE] = ft_atoi(argv[2]);
	type[TIME_EAT] = ft_atoi(argv[3]);
	type[TIME_SLEEP] = ft_atoi(argv[4]);
	if (argc == 6)
		type[NBR_EAT] = ft_atoi(argv[5]);
	else
		type[NBR_EAT] = -1;
	printf("philo ->         %d\n", type[NBR_PHILO]);
	printf("time_to_die ->   %d\n", type[TIME_DIE]);
	printf("nbr_eat ->       %d\n", type[TIME_EAT]);
	printf("time_to_sleep -> %d\n", type[TIME_SLEEP]);
	printf("time_to_eat ->   %d\n", type[NBR_EAT]);
	return(0);
}