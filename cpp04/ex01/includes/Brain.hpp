/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 05:25:44 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 05:50:20 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Brain {
public:
    // Constructors
    Brain(void);
    Brain(const Brain &other);

    // Assignment operator
    Brain& operator=(const Brain &other);
    
    // Destructors
    ~Brain(void);

    // Getter
    const std::string &getIdea(int index) const;

    // Setter
    void setIdea(const std::string newIdea, int index);

private:
    std::string _ideas[100];
};