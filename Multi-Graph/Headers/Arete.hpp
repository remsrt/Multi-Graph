#ifndef _EDGE
#define _EDGE
#include "../Headers/Sommet.hpp"

class Arete
{
    private:
        Sommet* debut;
        Sommet* fin;
        int poids;
    public:
        Arete(std::string _debut, std::string _fin, int _poids);
        Arete(Sommet* _debut, Sommet* _fin, int _poids);
        Arete(Arete &a);
        Sommet* get_debut() const;
        Sommet* get_fin() const;
        int get_poids() const;
        ~Arete();
};

std::ostream& operator<<(std::ostream& out, Arete const &a);

#endif