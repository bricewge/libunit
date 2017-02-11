/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 12:46:15 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 16:27:35 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
#include "../libft/libft.h"
typedef struct			s_test
{
	char				*name;
	int 				(*f)(void);
	struct test_struct	*next;
}						t_test;
/*
**			LIST FUNCTIONS
*/
void		ft_create_test_lst(test_lst *new_test);
void		ft_add_test_lst(test_lst *base);
void		ft_del_test_lst(test_lst *base);
/*
**			M_FRAMEWORK FUNCTIONS
*/
void		print_header(void);
void		load_test(t_test *testlist, char *name, int (*f)(void));
void		lauch_test(t_test *testlist, int *res_test);
int			print_total(int *res_test);
#endif
