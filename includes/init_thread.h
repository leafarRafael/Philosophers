/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_thread.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42so.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 10:54:32 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/23 11:04:32 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_THREAD_H
 #define INIT_THREAD_H

# include "list.h"
# include "philo.h"

void	init_list_thread(t_phi *phi, t_data *input, t_lst *lst);

#endif