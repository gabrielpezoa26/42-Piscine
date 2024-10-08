/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:26:58 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/08/17 12:12:24 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	signal;

	if (n >= 0)
	{
		signal = 'P';
	}
	else if (n < 0)
	{
		signal = 'N';
	}
	write(1, &signal, 1);
}
