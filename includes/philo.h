/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:31:14 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/20 18:01:42 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
 #define PHILO_H

# include "list.h"
# include <unistd.h>

#define ARG1 "number of philosophers;"
#define ARG2 "time to die;"
#define ARG3 "time to eat;"
#define ARG4 "time to sleep;"
#define ARG5 "number of times each philosopher must eat"

typedef	enum e_param
{
	NBR_PHILO = 1,
	TIME_DIE,
	TIME_EAT,
	TIME_SLEEP,
	NBR_EAT,
}		t_param;

int				valid_arguments(int argc, char *argv[]);
unsigned int	ft_atoi(const char *nptr);

#endif