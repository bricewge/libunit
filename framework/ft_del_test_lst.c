/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_test_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:18:56 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 15:00:44 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ft_del_test_lst(test_lst *base)
{
	test_lst	*tmp;

	tmp = base;
	while (base)
	{
		while (tmp->next)
			tmp = tmp->next;
		ft_strdel(&tmp->name);
		free(tmp);
		tmp = NULL;
		tmp = base;
	}
}
