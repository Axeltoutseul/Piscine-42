/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <axbaudri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:51:43 by axbaudri          #+#    #+#             */
/*   Updated: 2025/10/06 17:59:05 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(nbr) nbr % 2 == 0 ? TRUE : FALSE
# define ODD_MSG "I have an odd number of arguments."
# define EVEN_MSG "I have an even number of arguments."
# include <unistd.h>
# include <stdbool.h>

typedef bool	t_bool;

#endif
