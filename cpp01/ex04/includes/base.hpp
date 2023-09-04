/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:14:14 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 17:37:23 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

/* *************** ***************           *************** *************** */
/*                                  INCLUDES                                 */
/* *************** ***************           *************** *************** */

# include <iostream>
# include <fstream>

/* *************** ***************           *************** *************** */
/*                                   MACROS                                  */
/* *************** ***************           *************** *************** */

/* ***** ERRORS ***** */
# define ERR_ARG_COUNT "Error: wrong number of arguments\n" ERR_ARG
# define ERR_ARG "1st argument: file name to apply the replace\n\
2nd argument: string to find\n\
3rd argument: string to replace"
# define ERR_FILE "Error: file could not be opened"
# define ERR_EMPTY "Error: file is empty"
# define ERR_READ "Error: file could not be read"
# define ERR_WRITE "Error: file could not be written"

# define SUCCESS 0
# define FAILURE 1

/* ***** COLORS ***** */
# define RESET "\e[0m"
# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"

/* *************** ***************           *************** *************** */
/*                                 FUNCTIONS                                 */
/* *************** ***************           *************** *************** */

std::string replaceSubstring(const std::string &source, const std::string &search, const std::string &replace);
bool is_file_empty(const char *fileName);
bool is_file(const char *fileName);
void print_message(const std::string message, const std::string color);

#endif /* BASE_HPP */