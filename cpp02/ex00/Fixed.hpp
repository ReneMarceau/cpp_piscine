/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 19:11:49 by rene              #+#    #+#             */
/*   Updated: 2023/08/25 19:43:38 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
public:
    // Constructors
    Fixed(void);
    Fixed(const Fixed &other);
    
    // Assignment operator
    Fixed& operator=(const Fixed &other);
    
    // Destructor
    ~Fixed(void);

    // Getter
    int getRawBits(void) const;

    // Setter
    void setRawBits(int const raw);

private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;
};

#endif