/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 12:46:15 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 18:03:11 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
#include "libft.h"
#include "signal.h"
typedef struct			s_test
{
	char				**name;
	int 				(*f)(void);
	struct s_test		*next;
}						t_test;
/*
**			LIST FUNCTIONS
*/
t_test		*ft_create_test_lst(void);
void		ft_add_test_lst(t_test *base);
void		ft_del_test_lst(t_test *base);
/*
**			M_FRAMEWORK FUNCTIONS
*/
void		print_header(void);
void		load_test(t_test **testlist, char *name, int (*f)(void));
void		launch_tests(t_test **testlist, int *res_test);
int			print_total(int *res_test);
#endif
