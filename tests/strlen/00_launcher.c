/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:36:58 by bwaegene          #+#    #+#             */
/*   Updated: 2017/02/11 14:48:37 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "101_basic_tests.h"
#include "libunit.h"

void		strlen_launcher(int *res_test)
{
	t_test *testlist;
	puts("STRLEN:");
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	launch_tests(&testlist, res_test);
}
