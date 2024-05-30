/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:10:27 by zaldhahe          #+#    #+#             */
/*   Updated: 2024/05/30 22:13:52 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int PID;

	PID = ft_atoi(argv[1]);
	if (argc == 3)
	{
		if (argv[2][0] == '0')
			kill(PID, SIGUSR1);
		else
			kill(PID, SIGUSR2);
	}
}
