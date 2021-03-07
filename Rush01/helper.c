/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:58:30 by donggele          #+#    #+#             */
/*   Updated: 2021/03/07 17:30:02 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			g_cond[16];
extern int	*g_start[4];
extern int	g_move_intvl[4][2];

int		check_line_right(int *ptr, int intvl, int cond)
{
	int highst;
	int i;
	int	visible;

	highst = 0;
	i = 0;
	visible = 0;
	while (++i < 5)
	{
		if (*ptr > highst)
		{
			highst = *ptr;
			visible++;
		}
		ptr += intvl;
	}
	return (visible == cond);
}

int		is_answer(void)
{
	int	*ptr;
	int	i;
	int	j;
	int	idx;

	idx = 0;
	i = 0;
	while (i < 4)
	{
		ptr = g_start[i];
		j = 0;
		while (j < 4)
		{
			if (!check_line_right(ptr, g_move_intvl[i][0], g_cond[idx++]))
				return (0);
			ptr += g_move_intvl[i][1];
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_isspace(char c)
{
	if(c == ' ')
		return (1);
	return (0);
}

int		make_conditon(char *cond)
{
	int	cnt;
	int	i;

	i = 0;
	cnt = 0;
	while (cond[i])
	{
		if (i % 2 == 0 && !ft_isspace(cond[i])
				&& (cond[i] >= '1' && cond[i] <= '4'))
			g_cond[cnt++] = cond[i++] - '0';
		else if (i % 2 == 1 && ft_isspace(cond[i]))
			i++;
		else
			return (0);
	}
	return (cnt == 16);
}