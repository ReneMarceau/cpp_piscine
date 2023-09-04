/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 22:03:54 by rene              #+#    #+#             */
/*   Updated: 2023/08/25 22:18:50 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
public:
    // Constructors
    Point(void);
    Point(float const x, float const y);
    Point(const Point &other);

    // Assignment operator
    Point& operator=(const Point &other);

    // Destructor
    ~Point(void);

    // Getters
    Fixed const getX(void) const;
    Fixed const getY(void) const;

private:
    Fixed const _x;
    Fixed const _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif