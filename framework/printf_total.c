/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_total.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:42:54 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 19:54:03 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		print_total(int *res_test)
{
	int		res;

	res = res_test[1] - res_test[0];
	ft_putnbr(res_test[0]);
	ft_putchar('/');
	ft_putnbr(res_test[1]);
	ft_putendl(" tests checked");
	if (res == 0)
		return (0);
	return (1);
}
