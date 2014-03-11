/* 
 * File:   KMeans.h
 * Author: paulaceccon
 *
 * Created on 10 de Março de 2014, 17:37
 */

#ifndef KMEANS_H
#define	KMEANS_H

#include "Point.h"

#include <vector>
#include <limits>
#include <cmath>
#include <cstdlib>

/**
 * Estrutura que armazena um ponto, sua distancia ao cluster mais proximo 
 * e o ID do respectivo cluster.
 */
typedef struct {
    Point p;
    int cluster;
    double distanceToNearestCluster;
} ClustersData;
    
class KMeans {
public:
    /**
     * Construtor default.
     */
    KMeans( std::vector<Point> points, int clusters );
    
    /**
     * Destrutor.
     */
    virtual ~KMeans();
    
    /**
     * Vetor armazenando dados de um ponto e seu respectivo cluster.
     */
    std::vector<ClustersData> clustersData;
    std::vector<Point> clustersCentroids;
private:
    /**
     * Realiza a escolha dos centroides para cada cluster.
     */
    void KMeansCentroidsInicialization ( int clusters );
    
    /**
     * Executa o algorimo KMeans
     */
    void KMeansClusterization( int clusters );
    
    /**
     * Atualiada os centroides de cada cluster.
     */
    void KMeansCentroidsUpdate( void );
};

#endif	/* KMEANS_H */

