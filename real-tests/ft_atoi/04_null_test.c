/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 21:58:29 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 23:10:55 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "real-test.h"

int		null(void)
{
	if (ft_atoi("0") == atoi("0"))
		return (0);
	else
		return (-1);
}
