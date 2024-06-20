/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:29:31 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/20 14:39:57 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
 #define LIST_H

 #include <stdlib.h>
 #include <stdio.h>
 #include <pthread.h>

typedef	struct	s_philo
{
	pthread_t	*phi;

}			t_philo;

typedef	struct	s_fork
{
	pthread_t	*hashi;
}			t_fork;

typedef union	u_type
{
	t_fork	*hashi;
	t_philo	*philos;
}		t_type;

typedef struct s_no
{
	union t_type	*un;
	struct s_no		*next;
	struct s_no		*prev;
}		t_no;

typedef struct s_lst
{
	t_no	*head;
	t_no	*last;
	int		size;
}		t_lst;

void	init_lst(t_lst	*lst);
t_no	*init_node(void *content);
int		add_back(t_lst *lst, void *content);

#endif