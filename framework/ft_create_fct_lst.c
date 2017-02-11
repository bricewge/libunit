/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_fct_lst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:07:55 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 13:26:01 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ft_create_fct_lst(fct_lst *new_fct)
{
	test_lst	*new_test;

	new_test = NULL;
	if (new_fct = (fct_lst*)malloc(sizeof(*new_fct)))
	{
		new_fct->next = NULL;
		ft_create_test_lst(new_test);
	}
}
