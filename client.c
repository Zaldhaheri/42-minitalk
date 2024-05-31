/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:10:27 by zaldhahe          #+#    #+#             */
/*   Updated: 2024/05/31 20:24:14 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>

void	atob(int p, char *c)
{
	int	i;
	int	j;

	i = 0;
	while (c[i])
	{
		j = 7;
		while (j >= 0)
		{
			if (c[i] & (1 << j))
			{
				kill(p, SIGUSR2);
				usleep(500);
			}
			else
			{
				kill(p, SIGUSR1);
				usleep(500);
			}
			j--;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	pid;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (pid <= 0)
		{
			write(1, "WRONG PID!!!", 13);
			return (0);
		}
		atob(pid, argv[2]);
	}
	return (0);
}
