/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:36:58 by bwaegene          #+#    #+#             */
/*   Updated: 2017/02/11 22:29:37 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real-tests.h"
#include "libunit.h"
#include <limits.h>
#include <stdlib.h>

void		ft_atoi_launcher(int *res_test)
{
	t_test *testlist;

	testlist = NULL;
	ft_putendl("FT_ATOI:");
	load_test2(&testlist, "Basic positive test", &basic_positive_test);
	load_test2(&testlist, "Basic negative test", &basic_negative_test);
	load_test2(&testlist, "Basic jump test", &basic_jump_test);
	load_test2(&testlist, "Null test", &null_test);
	load_test2(&testlist, "Error test", &error_test1);
	load_test2(&testlist, "Error stop test", &error_stop_test1);
	load_test2(&testlist, "Error signe test", &error_signe_test1);
	load_test2(&testlist, "Intmin test", &intmin_test);
	load_test2(&testlist, "Intmax test", &intmax_test);
	load_test2(&testlist, "Small negative loop test", small_negative_loop_test);
	load_test2(&testlist, "Small positive loop test", &small_positive_loop_test);
	load_test2(&testlist, "Medium negative loop test", &medium_negative_loop_test);
	load_test2(&testlist, "Medium positive loop test", &medium_positive_loop_test);
	load_test2(&testlist, "Large negative loop test", &large_negative_loop_test);
	load_test2(&testlist, "Large positive loop test", &large_positive_loop_test);
	launch_tests(&testlist, res_test);
}
