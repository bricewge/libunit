/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:25:43 by bwaegene          #+#    #+#             */
/*   Updated: 2017/02/11 22:30:41 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H
#include "libunit.h"
void		strlen_launcher(int *res_test);
int			ok_test(void);
int			ko_test(void);
int			segfault_test(void);
int			buserror_test(void);
#endif
