#include <iostream>
#include "../Headers/Arete.hpp"
using namespace std;

Arete::Arete(string _debut, string _fin, int _poids):
    debut{new Sommet(_debut)},
    fin{new Sommet(_fin)},
    poids{_poids}{}

Arete::Arete(Sommet* _debut, Sommet* _fin, int _poids):
    debut{_debut},
    fin{_fin},
    poids{_poids}{}

Arete::Arete(Arete &a): //Constructeur par copie
    Arete(a.debut, a.fin, a.poids){}

Arete::~Arete(){}

Sommet* Arete::get_debut() const
{
    return debut;
}

Sommet* Arete::get_fin() const
{
    return fin;
}

int Arete::get_poids() const
{
    return poids;
}


//Surcharge de l'opérateur <<
ostream& operator<<(ostream& out, Arete const &a)
{
    out << "Début : " << a.get_debut()->get_etiquette() << endl;
    out << "Fin : " << a.get_fin()->get_etiquette() << endl;
    out << "Poids : " << a.get_poids() << endl;
    return out;
}