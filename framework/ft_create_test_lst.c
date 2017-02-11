/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_test_lst.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:11:32 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 16:44:47 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ft_create_test_lst(t_test *new_test)
{
	if ((new_test = (t_test*)malloc(sizeof(*new_test))))
	{
		new_test->name = NULL;
		new_test->f = NULL;
		new_test->next = NULL;
	}
}
