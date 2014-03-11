/* 
 * File:   Point.cpp
 * Author: paulaceccon
 * 
 * Created on 10 de Março de 2014, 16:30
 */

#include "Point.h"

Point::Point( )
{
    this->x = 0.0;
    this->y = 0.0;
}


Point::Point( const Point& orig )
{
    this->x = orig.x;
    this->y = orig.y;
}


Point::Point( double x, double y)
{
    this->x = x;
    this->y = y;
}


void Point::SetPoint( double x, double y)
{
    this->x = x;
    this->y = y;
}


int Point::GetXCoordinate( void )
{
    return this->x;
}


int Point::GetYCoordinate( void )
{
    return this->y;
}


Point::~Point() {
}

