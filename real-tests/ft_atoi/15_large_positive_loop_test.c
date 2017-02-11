/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_large_positive_loop_test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 22:23:21 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 22:23:45 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		large_positive_loop_test(void)
{
	if (ft_atoi(ft_itoa(LLONG_MAX + 1)) == atoi(ft_itoa(LLONG_MAX + 1))
		return (0);
	else
		return (-1);
}
