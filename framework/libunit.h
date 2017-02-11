/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 12:46:15 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 13:27:50 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
#include "libft/libft.h"
typedef struct			test_struct
{
	char				*t_name;
	char				*t_res;
	struct test_struct	*next;
}						test_lst;
typedef struct			fct_struct
{
	struct	test_struct	*test;
	struct	fct_struct	*next;
}						fct_lst;
/*
**			LIST FUNCTIONS
*/
void		ft_create_fct_lst(fct_lst *new_fct);
void		ft_create_test_lst(test_lst *new_test);
void		ft_add_fct_lst(fct_lst *base);
void		ft_add_test_lst(test_lst *base);
void		ft_del_fct_lst(fct_lst *base);
void		ft_del_test_lst(test_lst *base);
#endif
