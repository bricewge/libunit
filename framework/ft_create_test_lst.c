/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_test_lst.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:11:32 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 14:56:00 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ft_create_test_lst(test_lst *new_test)
{
	if (new_test = (test_lst)malloc(sizeof(*new_test)))
	{
		new_test->res = 0;
		new_test->next = NULL;
	}
}
