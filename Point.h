/* 
 * File:   Point.h
 * Author: paulaceccon
 *
 * Created on 10 de Março de 2014, 16:30
 */

#ifndef POINT_H
#define	POINT_H

class Point {
public:
    /**
     * Construtor default.
     */
    Point();
    
    /**
     * Construtor de copia.
     * @param orig
     */
    Point(const Point& orig);
    
    /**
     * Construtor que recebe duas coordenadas.
     * @param x - coordenada x
     * @param y - coordenada y
     */
    Point ( double x, double y );
    
    /**
     * Altera as coordenadas de um ponto.
     * @param x - coordenada x
     * @param y - coordenada y
     */
    void SetPoint ( double x, double y );
    
    /**
     * Retorna a coordenada x do ponto.
     */
    int GetXCoordinate ( void );
    
    /**
     * Retorna a coordenada y do ponto.
     */
    int GetYCoordinate ( void );
    
    /**
     * Destrutor.
     */
    virtual ~Point();
private:
    /**
     * Coordenadas x, y de um ponto.
     */
    double x, y;
};

#endif	/* POINT_H */

