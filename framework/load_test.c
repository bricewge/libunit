/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 14:55:36 by bwaegene          #+#    #+#             */
/*   Updated: 2017/02/11 16:45:19 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void		load_test(t_test *testlist, char *name, int (*f)(void))
{
	if (!name || !f)
		return;
	if (!testlist)
		ft_create_test_lst(testlist);
	else
		ft_add_test_lst(testlist);
	testlist->name = name;
	testlist->f = f;
}
