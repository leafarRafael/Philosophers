/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42so.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 11:22:28 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/23 15:33:12 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <unistd.h>
#include <sys/types.h>

void	*routine(void *ptr)
{
	t_no	*no;

	no = (t_no*) ptr;
	eat(no->phi.time_eat);
	slep(no->phi.time_sleep);
	die(no->phi.time_die);
}

void	sleep(unsigned int t_sleep)
{
	usleep(t_sleep);
}

void	eat(unsigned int t_sleep)
{
	
}
void	die();

