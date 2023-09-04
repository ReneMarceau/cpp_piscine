/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:43:37 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 22:15:29 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {
public:
    // Constructors & Destructors
    Harl(void);
    ~Harl(void);
    
    void complain(std::string level);
private:
    enum e_level {
        DEBUG,
        INFO,
        WARNING,
        ERROR
    };
    int find_level(const std::string &level);
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};

#endif /* HARL_HPP */