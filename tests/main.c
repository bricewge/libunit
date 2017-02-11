/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 14:20:14 by bwaegene          #+#    #+#             */
/*   Updated: 2017/02/11 19:55:06 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int main()
{
	int		res_test[2];

	res_test[0] = 0;
	res_test[1] = 0;
	/* print_header(); */
	strlen_launcher(res_test);
	/* gnl_laucher(); */
	return (print_total(res_test));
}
