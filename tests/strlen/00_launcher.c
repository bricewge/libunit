/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:36:58 by bwaegene          #+#    #+#             */
/*   Updated: 2017/02/11 20:02:07 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "libunit.h"

void		strlen_launcher(int *res_test)
{
	t_test *testlist;

	testlist = NULL;
	ft_putendl("STRLEN:");
	load_test(&testlist, "OK test", &ok_test);
	load_test(&testlist, "KO test", &ko_test);
	load_test(&testlist, "Seg fault test", &segfault_test);
	load_test(&testlist, "Bus error test", &buserror_test);
	launch_tests(&testlist, res_test);
}
