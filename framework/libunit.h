/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 12:46:15 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 12:52:07 by starrit          ###   ########.fr       */
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
	struct				*test_struct;
	struct	fct_struct	*next;
}						fct_lst;
#endif
