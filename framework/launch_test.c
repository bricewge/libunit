/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:03:38 by starrit           #+#    #+#             */
/*   Updated: 2017/02/12 16:13:09 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	ft_nosignal(t_test *tmp, int *res, int a)
{
	ft_putstr("    > ");
	ft_putstr(tmp->name);
	if (a == 0)
	{
		ft_putendl(" : [OK]");
		res[0]++;
	}
	else
		ft_putendl(" : [KO]");
}

static void	ft_signal(t_test *tmp, int status)
{
	ft_putstr("    > ");
	ft_putstr(tmp->name);
	if (status == 10)
		ft_putendl(" : [BUSE]");
	else if (status == 11)
		ft_putendl(" : [SEGV]");
	else if (status == 6)
		ft_putendl(" : [FREE ERROR]");
	else
		ft_putendl(" : [UNEXPECTED SIGNAL ERROR]");
}

void		launch_tests(t_test **testlist, int *res_test)
{
	t_test	*tmp;
	pid_t	pid;
	int		status;
	int		ret;

	tmp = *testlist;
	ret = 0;
	status = 0;
	while (tmp)
	{
		pid = fork();
		if (pid == -1)
			exit(EXIT_FAILURE);
		else if (pid == 0)
		{
			ret = tmp->f();
			ft_del_test_lst(testlist);
			exit(0);
		}
		else
		{
			wait(&status);
			if (!WIFSIGNALED(status))
			{
				ret = tmp->f();
				if (ret == 0)
					ft_nosignal(tmp, res_test, 0);
				else
					ft_nosignal(tmp, res_test, 1);
			}
			else
				ft_signal(tmp, status);
			res_test[1]++;
			tmp = tmp->next;
		}
	}
}
