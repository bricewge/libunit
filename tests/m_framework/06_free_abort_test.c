/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_free_abort_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:41:37 by starrit           #+#    #+#             */
/*   Updated: 2017/02/12 19:20:38 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		free_abort_test(void)
{
	free(" ");
	if (1)
		return (0);
	else
		return (-1);
}

