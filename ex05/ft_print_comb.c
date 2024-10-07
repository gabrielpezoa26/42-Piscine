/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:40:37 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/08/22 13:26:06 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>                //apagarrr
void	ft_print_comb(void)
{
	int	current_value;
	
	current_value = 0;
	while (current_value < "10")
	{
	write(1, &current_value, 1);
	current_value ++;
	}

}

int	main(void)
{
	ft_print_comb();
	return (0);
}
