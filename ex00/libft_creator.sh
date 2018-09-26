#!/bin/sh
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seli <seli@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/26 00:51:28 by seli              #+#    #+#              #
#    Updated: 2018/09/26 00:51:28 by seli             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ftlib=""
find . -type f -name "ft*.c" | while read line; do
	gcc -c $line
done
find . -type f -name "ft*.o" | ( while read line; do
	ftlib="$line $ftlib"
done
echo $ftlib | xargs ar rc libft.a )

find . -type f -name "ft*.o" | xargs rm
