/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:32:15 by rbutzke           #+#    #+#             */
/*   Updated: 2024/06/20 14:12:14 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char *argv[])
{
	int	i;
	t_lst	lst;

	init_lst(&lst);
	i = 0;
	printf("total arguments %d\n\n", argc);
	while (argv[i])
	{
		printf("conteudo-> [%s] | indice->[%d]\n", argv[i], i);
		i++;
	}	
}