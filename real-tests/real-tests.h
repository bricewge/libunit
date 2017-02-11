/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real-tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:25:43 by bwaegene          #+#    #+#             */
/*   Updated: 2017/02/11 22:02:39 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL-TESTS_H
# define REAL-TESTS_H
#include "libunit.h"
void		ft_atoi_launcher(int *res_test);
int			basic_positive_test(void);
int			basic_negative_test(void);
int			basic_jump_test(void);
int			null_test(void);
int			error_test(void);
int			error_stop_test(void);
int			error_signe_test(void);
int			intmin_test(void);
int			intmax_test(void);
int			small_negative_test(void);
int			small_positive_test(void);
int			medium_negative_test(void);
int			medium_positive_test(void);
int			large_negative_test(void);
int			large_positive_test(void);
#endif
