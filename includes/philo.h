/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42so.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:31:14 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/23 15:07:49 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
 #define PHILO_H

#define ARG1 "number of philosophers;"
#define ARG2 "time to die;"
#define ARG3 "time to eat;"
#define ARG4 "time to sleep;"
#define ARG5 "number of times each philosopher must eat"

typedef struct	s_data
{
	int				nbr_filo;
	unsigned int	time_die;
	unsigned int	time_eat;
	unsigned int	time_sleep;
	unsigned int	nbr_eat;
	unsigned int	start;
}			t_data;

int	ft_setarg(t_data	*input, int argc, char *argv[]);
unsigned int	get_time(void);


#endif