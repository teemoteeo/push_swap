/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timoteo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:21:20 by timoteo           #+#    #+#             */
/*   Updated: 2025/12/24 12:02:54 by timoteo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	int 		value;
	int		index;
	struct s_list	*prev;
	struct s_list	*next;
} t_stack;

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"



#endif
