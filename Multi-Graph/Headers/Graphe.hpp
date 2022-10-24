#ifndef _GRAPH
#define _GRAPH
#include "../Headers/Arete.hpp"
#include "../Headers/Sommet.hpp"

class Graphe
{
    private:

    public:
        void ajoute_sommet();
        void ajoute_arete();
        int poids();
        void symetrise();
        void kruskal();
};

#endif