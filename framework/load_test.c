/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 14:55:36 by bwaegene          #+#    #+#             */
/*   Updated: 2017/02/11 18:49:26 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void		load_test(t_test **testlist, char *name, int (*f)(void))
{
	t_test *tmp;

	tmp = NULL;
	if (!name || !f)
		return;
	if (!(*testlist))
		*testlist = ft_create_test_lst();
	else
		ft_add_test_lst(*testlist);
	tmp = *testlist;
	while (tmp->next)
		tmp = tmp->next;
	tmp->name = ft_strdup(name);
	tmp->f = f;
}
