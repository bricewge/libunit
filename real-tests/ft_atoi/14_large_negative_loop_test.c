/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_large_negative_loop_test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 22:21:16 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 23:24:29 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "real-tests.h"

int		large_negative_loop_test(void)
{
	if (ft_atoi(ft_itoa(LLONG_MIN - 1)) == atoi(ft_itoa(LLONG_MIN - 1)))
		return (0);
	else
		return (-1);
}
