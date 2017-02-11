/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_fct_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:18:11 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 13:22:56 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ft_del_fct_lst(fct_lst	*base)
{
	fct_lst	*tmp;

	tmp = base;
	while (base)
	{
		while (tmp->next)
			tmp = tmp->next;
		ft_del_test_lst(tmp);
		tmp = base;
	}
}
