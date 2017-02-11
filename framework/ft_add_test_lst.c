/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_test_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:16:34 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 13:17:39 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ft_add_test_lst(test_lst *base)
{
	test_lst	*new;
	test_lst	*tmp;

	new = NULL;
	tmp = base;
	ft_create_test_lst(new);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
