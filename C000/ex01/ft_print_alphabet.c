/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:28:55 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/08/20 11:58:27 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;
	int batata;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter ++;
	}	
}

int main()
{
	ft_print_alphabet();
	return 0;
}
