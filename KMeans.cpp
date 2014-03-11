/* 
 * File:   KMeans.cpp
 * Author: paulaceccon
 * 
 * Created on 10 de Março de 2014, 17:37
 */

#include "KMeans.h"

KMeans::KMeans( std::vector<Point> points, int clusters ) 
{
    for (std::vector<Point>::iterator it = points.begin(); it != points.end(); it++)
    {
        ClustersData data;
        data.p = *it;
        data.cluster = -1;
        data.distanceToNearestCluster = std::numeric_limits<double>::infinity();
        clustersData.push_back( data );
    }
    
    KMeansClusterization ( clusters );
}


void KMeans::KMeansCentroidsInicialization ( int clusters ) 
{
    for (int i = 0; i < clusters; i++)
    {
        // Gerando centroides aleatórios para n clusters
        int centroid = rand() % clustersData.size( );
        clustersCentroids.push_back( clustersData[centroid].p );
    }
}


void KMeans::KMeansClusterization( int clusters )
{
    KMeansCentroidsInicialization ( clusters );
    
    bool anyChanges = false;
    
    do
    {
        for (std::vector<ClustersData>::iterator itD = clustersData.begin(); itD != clustersData.end(); itD++)
        {
            for (std::vector<Point>::iterator itC = clustersCentroids.begin(); itC != clustersCentroids.end(); itC++)
            {
                // Distancia do ponto analisado ao cluster corrente.
                double currentClusterDistance = sqrt( pow( itD->p.GetXCoordinate( ) - itC->GetXCoordinate( ), 2 ) + 
                                                      pow( itD->p.GetYCoordinate( ) - itC->GetYCoordinate( ), 2 ));

                // Se a distancia a esse cluster for menor que a distancia
                // armazenada, atualizacao e necessaria.
                if ( currentClusterDistance < itD->distanceToNearestCluster )
                {
                    itD->distanceToNearestCluster = currentClusterDistance;
                    itD->cluster = itC - clustersCentroids.begin();

                    anyChanges = true;
                }
            } 
        }
        
        KMeansCentroidsUpdate( );
    }
    while ( !anyChanges ) ;  
}


void KMeans::KMeansCentroidsUpdate ( void ) 
{
    // Limpa o vetor de centroides.
    clustersCentroids.clear( );
    
    // Recupera todos os pontos de um mesmo cluster.
    for (std::vector<Point>::iterator itC = clustersCentroids.begin(); itC != clustersCentroids.end(); itC++)
    {
        double x = 0.0, y = 0.0;
        int pointsInCluster = 0;
        for (std::vector<ClustersData>::iterator itD = clustersData.begin(); itD != clustersData.end(); itD++)
        {
            // Calcula o novo centroide.
            if ( itD->cluster == itC - clustersCentroids.begin() )
            {
                pointsInCluster ++;
                x += itD->p.GetXCoordinate( );
                y += itD->p.GetXCoordinate( );
            }
        }
        Point c( x/pointsInCluster, y/pointsInCluster );
        clustersCentroids.push_back( c );
    }
}


KMeans::~KMeans() 
{
}

