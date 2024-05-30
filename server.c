/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:10:41 by zaldhahe          #+#    #+#             */
/*   Updated: 2024/05/30 22:10:51 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void ft_handler(int sigusr)
{
	if (sigusr == SIGUSR1)
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
}

int main()
{
	pid_t PID;

	PID = getpid();
	ft_putnbr(PID);
	signal(SIGUSR1, ft_handler);
	signal(SIGUSR2, ft_handler);
	while(1)
		pause();
	return (0);
}
