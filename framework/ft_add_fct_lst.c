/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_fct_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:13:54 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 13:16:12 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ft_add_fct_lst(fct_lst *base)
{
	fct_lst	*new;
	fct_lst	*tmp;
	
	new = NULL;
	tmp = base;
	ft_create_fct_lst(new);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
