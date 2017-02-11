/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_small_positive_loop_test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 22:21:57 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 23:12:12 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "real-test.h"

int		small_positive_loop_test(void)
{
	if (ft_atoi(ft_itoa(INT_MAX + 1)) == atoi(ft_itoa(INT_MAX + 1))
		return (0);
	else
		return (-1);
}
