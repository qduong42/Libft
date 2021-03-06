/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:37:53 by qduong            #+#    #+#             */
/*   Updated: 2022/01/04 14:42:33 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//put error to stderr(fd 2)
int	ft_put_error(void)
{
	write(STDERR_FILENO, "Error\n", 6);
	return (-1);
}
