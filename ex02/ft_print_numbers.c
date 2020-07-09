/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damangue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:16:02 by damangue          #+#    #+#             */
/*   Updated: 2020/07/09 08:54:53 by damangue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


	

void	ft_print_numbers(void)
{
		char  numero;
	    char  number;
		
		numero = '0';

		number = '9';


 while('0'<= number)
{
	ft_putchar(numero);
	numero++;
}
}

