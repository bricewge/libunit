/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_error_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 22:03:41 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 23:21:52 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "real-tests.h"

int		error_test(void)
{
	if (ft_atoi("ghjk") == atoi("ghjk"))
		return (0);
	else
		return (-1);
}